@echo off
color 0a
title MultiTool

echo.
echo                             Welcome to MultiTool
echo                                   Ver 0.0.3
echo --------------------------------------------------------------------------------
echo.
echo  ------------------------------------------
echo  ^| Tools                            [ x ] ^|
echo  ------------------------------------------
echo  ^| [ 1 ] For DDOS protocol                ^|
echo  ^| [ 2 ] Self-destruct protocol           ^|
echo  ^| [ 3 ] CMD                              ^|
echo  ^| [ 4 ] Diskpart (Admin Rights Required) ^|
echo  ^|                                        ^|
echo  ^| [ x ] Exit                             ^|
echo  ------------------------------------------
echo.

set /p choice="Enter Number> "
if %choice%==1 (
	goto a
)
if %choice%==2 (
	goto loop
)
if %choice%==3 (
	cls
	:cmd
	ver
	set /p var="%cd%>"
	%var%
	echo.
	goto cmd
)
if %choice%==4 (
	cls
	diskpart
	exit
)
if %choice%==5 (
	python %~dp0\python\MultiTool.py %*
	pause
)
if %choice%==x (
	exit
)

:a
cls
echo ============
echo DDOS Program
echo ============
pause
ping localhost >nul
echo Enter IP Adress
set /p x= Ip Adress:
ping %x%
goto size
:size
echo Enter Packet Size
set /p p= PacketSize:
echo Press Any Key To Continue
pause >nul
goto :ddos
color c
ping %x%

:loop
start Ultra.bat
goto loop
