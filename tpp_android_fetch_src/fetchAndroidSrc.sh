#fetchAndroidSrc.sh - Tool to download Android source with deps.
#
#This file is part of teampcphone.
#
#Copyright (C) 2015  Dario Dorando
#
#teampcphone is free software: you can redistribute it and/or modify
#it under the terms of the GNU General Public License as published by
#the Free Software Foundation, either version 3 of the License, or
#(at your option) any later version.
#
#This program is distributed in the hope that it will be useful,
#but WITHOUT ANY WARRANTY; without even the implied warranty of
#MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#GNU General Public License for more details.
#
#You should have received a copy of the GNU General Public License
#along with this program.  If not, see <http://www.gnu.org/licenses/>.

#!/bin/bash

# INFO: http://source.android.com/source/build-numbers.html is your source for Buildnumbers
ANDROID_VERSION=

function fetchUserDefinedAssets {
	# You can insert here any file-fetching command you want!
}

function info {
	echo "[INFO] $(1)"
}

function warn {
	echo "[WARNING] $(1)"
}

function error {
	echo "[ERROR] $(1)"
}

info "fetchAndroidSrc v1.0_revA"

if [ $1 = 2 ]
then
	info "Refetching Android Sources... please wait."
else
	info "Fetch Android Sources... please wait."
fi

if [ -e android/ ]
then
	info "Deleting old Android Source Folder..."
	rm -r android/
	info "Done."
	info "Recreating android/ Folder with all it's contents..."
fi

mkdir android/
info "Created android/"
cd android/
info "Fetch and install an Android udev-Rule"
wget -S -O - http://source.android.com/source/51-android.rules | sed "s/<username>/$USER/" | sudo tee >/dev/null /etc/udev/rules.d/51-android.rules; sudo udevadm control --reload-rules
info "Done."
info "Setting Up for a build..."
sudo apt-get update
sudo apt-get install bison g++-multilib git gperf libxml2-utils make python-networkx zlib1g-dev:i386 zip -y
sudo apt-get install openjdk-7-jre openjdk-6-jre openjdk-7-jdk openjdk-6-jdk -y
sudo update-alternatives --config java
sudo update-alternatives --config javac
curl https://storage.googleapis.com/git-repo-downloads/repo > repo
chmod a+x repo
sudo install -b -v -T repo /usr/bin/repo
mkdir src
cd src
info "Done."
info "Fetch Android Source: $(ANDROID_VERSION)"
repo init -u https://android.googlesource.com/platform/manifest -b $ANDROID_VERSION
repo sync
info "Done."
echo $ANDROID_VERSION >> src/version._acc
info "Export neccesary Variables (and put them in .bashrc)..."
export USE_CCACHE=1
export USE_CCACHE=1 >> ~/.bashrc
info "Done."
info "Done with fetching Android Sourcecode."
info "Fetch User-Defined Assets... (if set)"
fetchUserDefinedAssets
info "Done."
exit 0