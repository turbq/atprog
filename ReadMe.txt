Title
atprogram standalone utility

Article URL
https://microchipsupport.force.com/s/article/atprogram-standalone-utility

Question
How to use atprogram.exe as a standalone utility without installing Atmel Studio? 

Answer
Atprogram utility can be used as a standalone utility, but unfortunately we do not have standalone installer for “atprogram.exe”. Following procedure is a ‘workaround’ to run atprogram.exe as standalone application. If you face any issue with below procedure, please get in touch with Atmel support team. 

The workaround is that, install Atmel Studio in any of the system and copy the below mentioned folders from the following installation path. Then user can paste the copied folders in a specific location in the required system. Then user need to go to the atbackend folder in command line and use atprogram commands.
For this, Atmel Studio must be installed in at least in one PC to copy the relevant files and folders. 
We recommend to use our latest Atmel Studio 7. It can be downloaded from the following link (http://www.atmel.com/tools/atmelstudio.aspx?tab=overview).
If the user still needs to use the Atprogram with Atmel Studio 6.2 refer the steps for Atmel Studio 6.2. It can be downloaded from the following link (http://www.atmel.com/tools/STUDIOARCHIVE.aspx). 

For using the Atprogram with Atmel Studio 7 refer the below steps:
1. From Atmel Studio 7 Install directory (C:\Program Files (x86)\Atmel\Studio\7.0) copy the below folders to destination(new) directory. 
	copy atbackend directory. 
	copy atpackmanager directory. 
	copy packs directory. 
	copy tools folder. 
2. Keep all the above folders within a single folder in the other PCs where Atmel Studio is not installed. 
	open atpackmanger\atpack.properties and Set CacheFolder to empty string as below. (CacheFolder=%localappdata%\Atmel\AtmelStudio\7.0 to CacheFolder=) 
	open atpackmanager\packmanager.exe. Go to Advanced menu -> Click ‘ResetCache’ 
3. Go to Command prompt browse the atbackend folder located in the newly copied directory and type atprogram. This will list all the available atprogram commands. 
  Note: 
  1. For atprogram to work Atmel usb drivers(Atmel USB Installer 7.0 - supported for Atmel Studio 7.0) should be installed in the target PC. (https://gallery.atmel.com/?q=Atmel%20USB%20Installer%207.0)
  2. Install VC++ Runtime components in the target PC
	?For Atmel Studio 7 build version below 790, Install the VC++ in the following link (https://www.microsoft.com/en-in/download/details.aspx?id=5555).
	?For Atmel Studio 7 build version 790 and above, Install the VC++ in the following link (https://www.microsoft.com/en-in/download/details.aspx?id=48145).

For using the Atprogram with Atmel Studio 6.2 refer the below steps:
atprogram requires the atbackend, devices and tools folder and contents to be present on the computer (as laid out in the install folder). 
1. From Atmel Studio 6.2 Install directory (C:\Program Files (x86)\Atmel\Atmel Studio 6.2) copy the below mentioned folders to destination(new) directory. 
	C:\Program Files (x86)\Atmel\Atmel Studio 6.2\atbackend
	C:\Program Files (x86)\Atmel\Atmel Studio 6.2\devices
	C:\Program Files (x86)\Atmel\Atmel Studio 6.2\tools
2. Keep all the above folders within a single folder in the other PCs where Atmel Studio is not installed.
3. Go to Command prompt browse the atbackend folder located in the newly copied directory and type atprogram. This will list all the available atprogram commands. 
  Note: 
  1. For atprogram to work Atmel usb drivers(Atmel USB Installer - supported for Atmel Studio 6.2) should be installed in the target PC. (https://gallery.atmel.com/Products/?q=atmel%20usb%20installer)