ROOT_DIR:=../../..
FPGA_OBJ=synth_system.bit
FPGA_LOG=vivado.log

BOARD=AES-KU040-DB-G

FPGA_SERVER=$(VIVA_SERVER)
FPGA_USER=$(VIVA_USER)

BOARD_SERVER=$(KU40_SERVER)
BOARD_USER=$(KU40_USER)

NORUN = 0

include ../fpga.mk

# work-around for http://svn.clifford.at/handicraft/2016/vivadosig11
export RDI_VERBOSE = False

<<<<<<< HEAD
board-clean: hw-clean
	rm -rf .Xil/ *.map *. *~ synth_*.mmi synth_*.bit synth_system*.v *.vcd \
	*_tb table.txt tab_*/ *webtalk* *.jou xelab.* xsim[._]* xvlog.* *.log \
	uart_loader *.ltx system.v fsm_encoding.os
	if [ $(CLEANIP) ]; then rm -rf ip test-expected.log; fi
=======
clean: hw-clean
	rm -rf .Xil/ *.map *. *~ synth_*.mmi synth_*.bit synth_system*.v *.vcd *_tb table.txt tab_*/ *webtalk* *.jou xelab.* xsim[._]* xvlog.* uart_loader *.ltx system.v fsm_encoding.os $(COMPILE_OBJ)
	rf -rf ./reports

clean-ip:
	rm -rf ip *.log
>>>>>>> 81c32be7666deb90b79a6280bb8c33b765782df0

.PHONY: board-clean
