#buildAndroid.sh - Builds the android source.
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

function info {
	echo "[INFO] $(1)"
}

function warn {
	echo "[WARNING] $(1)"
}

function error {
	echo "[ERROR] $(1)"
}

info "buildAndroid v1.0_revA"
info "Initialize the environment..."
cd android/src/
source build/envsetup.sh
info "Done."
info "Set the target..."
lunch aosp_arm-userdebug
info "Done."
make -j4
info "Done."

