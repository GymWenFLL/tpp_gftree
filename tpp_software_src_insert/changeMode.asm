[GLOBAL rstMode]
rstMode:
	TEQP R6,PC
	MOV R0,R0

[GLOBAL setModeSVC]
setModeSVC:
	MOV R6,PC
	ORR R7,R6,#3
	TEQP R7,PC
	MOV R0,R0