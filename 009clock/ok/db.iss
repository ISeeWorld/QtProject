; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "后台机报文浏览助手"
#define MyAppVersion "1.0"
#define MyAppPublisher "鄂尔多斯电业局变电管理二处"
#define MyAppURL "http://www.impc.com.cn/"
#define MyAppExeName "AlarmClock.exe"

[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{41FF1107-DA57-4FC2-B472-9C46DBB73279}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
;AppVerName={#MyAppName} {#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={pf}\{#MyAppName}
DisableProgramGroupPage=yes
InfoAfterFile=D:\QT\MyProject\009clock\ok\说明书.txt
OutputDir=D:\QT\MyProject\009clock\ok
OutputBaseFilename=setup
Compression=lzma
SolidCompression=yes

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
Source: "D:\QT\MyProject\009clock\ok\AlarmClock.exe"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\QT\MyProject\009clock\ok\1.png"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\QT\MyProject\009clock\ok\1.wav"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\QT\MyProject\009clock\ok\2.wav"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\QT\MyProject\009clock\ok\3.wav"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\QT\MyProject\009clock\ok\4.wav"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\QT\MyProject\009clock\ok\5.wav"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\QT\MyProject\009clock\ok\config.ini"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\QT\MyProject\009clock\ok\libgcc_s_dw2-1.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\QT\MyProject\009clock\ok\log.txt"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\QT\MyProject\009clock\ok\mingwm10.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\QT\MyProject\009clock\ok\QtCore4.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\QT\MyProject\009clock\ok\QtGui4.dll"; DestDir: "{app}"; Flags: ignoreversion
Source: "D:\QT\MyProject\009clock\ok\wb.png"; DestDir: "{app}"; Flags: ignoreversion
; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
Name: "{commonprograms}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon

[Run]
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent

