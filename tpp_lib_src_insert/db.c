int db(int * rl,int * iv) {
	__asm__("%e1 db %r1"
		:
		:"e"(rl),"r"(iv)
		:"memory");
	return 0;
}
