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
echo  ^| [ 1 ] IP config                        ^|
echo  ^| [ 2 ] Self-destruct protocol           ^|
echo  ^| [ 3 ] CMD                              ^|
echo  ^| [ 4 ] Diskpart (Admin Rights Required) ^|
echo  ^| [ 5 ] Start Python modules             ^|
echo  ^|                                        ^|
echo  ^| [ x ] Exit                             ^|
echo  ------------------------------------------
echo.

set /p choice="Enter Number> "
if %choice%==1 (
	ipconfig
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
:loop
start Ultra.bat
goto loop
