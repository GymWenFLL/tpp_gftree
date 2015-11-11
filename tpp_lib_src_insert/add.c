int add(int * fu,int * re) {
	__asm__("add %a1,%b1"
		:
		:"a"(fu),"b"(re)); // fu = the descriptor, where we add the descriptor re
	return 0;
}
