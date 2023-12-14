#define MyAppName "StandalIDE"
#define MyAppVersion "6.1"
#define MyAppPublisher "Michael Agarkov"
#define MyAppURL "https://github.com/MichaelAgarkov"
#define MyAppExeName "StandalIDE.exe"

[Setup]
AppId={{26ED396D-6BED-4867-A6D6-7EE64E0E85BC}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName=C:\{#MyAppName}
DisableProgramGroupPage=yes
LicenseFile=License.rtf
PrivilegesRequiredOverridesAllowed=dialog
OutputDir=.
OutputBaseFilename={#MyAppName} Setup
SetupIconFile=icon.ico
Compression=lzma2/max
SolidCompression=yes
UninstallDisplayIcon={app}\{#MyAppExeName}
WizardStyle=classic
DisableWelcomePage=no
WizardImageFile=Wizard Image.bmp
WizardSmallImageFile=Wizard Small Image.bmp

[Types]
Name: "full"; Description: "Full installation"
Name: "compact"; Description: "Compact installation"
Name: "custom"; Description: "Custom installation"; Flags: iscustom

[Components]
Name: "main"; Description: "StandalIDE"; Types: full compact custom; Flags: fixed
Name: "pdb"; Description: "PDB file"; Types: full

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
Source: "StandalIDE.exe"; DestDir: "{app}"; Flags: ignoreversion; Components: main
Source: "StandalIDE.pdb"; DestDir: "{app}"; Flags: ignoreversion; Components: pdb
Source: "ConsoleControl.dll"; DestDir: "{app}"; Flags: ignoreversion; Components: main
Source: "ConsoleControlAPI.dll"; DestDir: "{app}"; Flags: ignoreversion; Components: main
Source: "License.rtf"; DestDir: "{app}"; Flags: ignoreversion; Components: main
Source: "License.txt"; DestDir: "{app}"; Flags: ignoreversion; Components: main
Source: "GitHub.bmp"; Flags: dontcopy

[Icons]
Name: "{autoprograms}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"
Name: "{autodesktop}\{#MyAppName}"; Filename: "{app}\{#MyAppExeName}"; Tasks: desktopicon

[Run]
Filename: "{app}\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent

[Code]
procedure DonateImageOnClick(Sender: TObject);
var
  ErrorCode: Integer;
begin
  ShellExecAsOriginalUser('open', 'https://github.com/MichaelAgarkov', '', '', SW_SHOWNORMAL, ewNoWait, ErrorCode);
end;

<event('InitializeWizard')>
procedure DonateImageInitializeWizard;
var
  DonateImageFileName: String;
  DonateImage: TBitmapImage;
  BevelTop: Integer;
begin
  DonateImageFileName := ExpandConstant('{tmp}\GitHub.bmp');
  ExtractTemporaryFile(ExtractFileName(DonateImageFileName));
  DonateImage := TBitmapImage.Create(WizardForm);
  DonateImage.AutoSize := True;
  DonateImage.Bitmap.LoadFromFile(DonateImageFileName);
  DonateImage.Anchors := [akLeft, akBottom];
  BevelTop := WizardForm.Bevel.Top;
  DonateImage.Top := BevelTop + (WizardForm.ClientHeight - BevelTop - DonateImage.Bitmap.Height) div 2;
  DonateImage.Left := DonateImage.Top - BevelTop;
  DonateImage.Cursor := crHand;
  DonateImage.OnClick := @DonateImageOnClick;
  DonateImage.Parent := WizardForm;
end;
