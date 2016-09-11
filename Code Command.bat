@echo off
color 0a
title Code Command
echo.
echo Welcome to Code Command
echo Ver 0.0.2
echo.
echo ------------------------
echo ! For DDOS protical
echo 2 Self Distruct protical
echo 3 CMD
echo 4 Diskpart (Admin Rights Required)
echo 5 Close
echo ------------------------
echo.

set /p choice="Enter Number"
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
puase >nul
goto :ddos
color c
ping %x%
:loop
start Ultra.bat
goto loop