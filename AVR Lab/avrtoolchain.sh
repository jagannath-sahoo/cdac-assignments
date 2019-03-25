sudo apt-get update

echo "Installing AVR ToolChain......"
sudo apt-get install gcc-avr binutils-avr avr-libc

echo "Installing AVR Debugger......"
sudo apt-get install gdb-avr

echo "Installing AVR Dude........"
sudo apt-get install avrdude
