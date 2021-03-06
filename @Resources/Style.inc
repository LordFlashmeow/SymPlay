[Variables]
@include=#@#Variables.inc
@include2=#@#Utilities\Chameleon.inc
MainTextFont=Montserrat
AltTextFont=Montserrat Extra Light
MainSize=24
AltSize=24

[UseDesktopColors]
Measure=Calc
DynamicVariables=1
UpdateDivider=5
;Update the skin colors every half second

Formula=0

IfConditionMode=1

IfCondition=DesktopColorsEnabled = 1
IfTrueAction=[!SetOption DesktopMainForeground String [ChameleonFG1]][!SetOption DesktopAltForeground String [ChameleonFG2]]
IfFalseAction=[!SetOption DesktopMainForeground String #CustomPrimaryColor#][!SetOption DesktopAltForeground String #CustomSecondaryColor#]

[DesktopMainForeground]
Measure=String
String=255,255,255

[DesktopAltForeground]
Measure=String
String=128,128,128

[DesktopColorsEnabled]
DynamicVariables=1
Measure=Calc
Formula=#UseDesktopColors#

[MainTextStyle]
DynamicVariables=1
FontFace=#MainTextFont#
FontSize=#MainSize#
FontColor=[DesktopMainForeground]
AntiAlias=1
SolidColor=0,0,0,1

[AltTextStyle]
DynamicVariables=1
FontFace=#AltTextFont#
FontSize=#AltSize#
FontColor=[DesktopMainForeground]
AntiAlias=1
SolidColor=0,0,0,1

[NOWStyle]
X=38
Y=30
Text=NOW
[NOTStyle]
Text=NOT
Y=30
X=48

[PLAYINGStyle]
Text=Playing
X=0
Y=48
[PAUSEDStyle]
Text=Paused
X=7
Y=48

[NavigationButtonStyle]
DynamicVariables=1
Hidden=1
Group=NavigationGroup
FontFace=#MainTextFont#
FontSize=16
FontColor=[DesktopMainForeground]
AntiAlias=1
SolidColor=0,0,0,1
