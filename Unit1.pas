﻿unit Unit1;

interface

uses System, System.ComponentModel, System.Drawing, System.Windows.Forms, ConsoleControl, Settings, UnsavedChanges, About, LoadingScreen;

var
  DefThemeSetting, AOTATSetting, FATSetting, WWASSetting: string;
  ParseTextEncoding := new RichTextBox;
  TextEdited: boolean = false;
  ConsoleOpenedOnce: boolean = false;
  Loading := Form(new LoadingScreenForm);

type
  Form1 = class(Form)
    procedure settingsToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure Form1_FormClosed(sender: Object; e: FormClosedEventArgs);
    procedure Form1_Load(sender: Object; e: EventArgs);
    procedure lightThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure darkThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure openToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure saveToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure fontToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure fontToolStripMenuItem1_Click(sender: Object; e: EventArgs);
    procedure aboutToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure saveFileDialog1_FileOk(sender: Object; e: CancelEventArgs);
    procedure openFileDialog1_FileOk(sender: Object; e: CancelEventArgs);
    procedure textBox1_TextChanged(sender: Object; e: EventArgs);
    procedure Form1_FormClosing(sender: Object; e: FormClosingEventArgs);
    procedure alwaysOnTopToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure nightThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure blueThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure endermanThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure programmingThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure fullscreenModeToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure printToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure printDocument1_PrintPage(sender: Object; e: Drawing.Printing.PrintPageEventArgs);
    procedure closeToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure editorSettingsToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure timer1_Tick(sender: Object; e: EventArgs);
    procedure wordWrapToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure vaporwaveThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure waterThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure contextMenuStrip1_Opening(sender: Object; e: CancelEventArgs);
    procedure evilRedThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
    procedure toolStripSplitButton1_ButtonClick(sender: Object; e: EventArgs);
    procedure timer2_Tick(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Unit1.Form1.resources}
    menuStrip1: MenuStrip;
    statusStrip1: StatusStrip;
    fileToolStripMenuItem: ToolStripMenuItem;
    aboutToolStripMenuItem: ToolStripMenuItem;
    openToolStripMenuItem: ToolStripMenuItem;
    saveToolStripMenuItem: ToolStripMenuItem;
    fontToolStripMenuItem: ToolStripMenuItem;
    toolStripSeparator2: ToolStripSeparator;
    settingsToolStripMenuItem: ToolStripMenuItem;
    toolStripStatusLabel1: ToolStripStatusLabel;
    themesToolStripMenuItem: ToolStripMenuItem;
    lightThemeToolStripMenuItem: ToolStripMenuItem;
    darkThemeToolStripMenuItem: ToolStripMenuItem;
    saveFileDialog1: SaveFileDialog;
    contextMenuStrip1: System.Windows.Forms.ContextMenuStrip;
    components: System.ComponentModel.IContainer;
    fontToolStripMenuItem1: ToolStripMenuItem;
    openFileDialog1: OpenFileDialog;
    toolStripSeparator1: ToolStripSeparator;
    alwaysOnTopToolStripMenuItem: ToolStripMenuItem;
    fontDialog1: FontDialog;
    nightThemeToolStripMenuItem: ToolStripMenuItem;
    blueThemeToolStripMenuItem: ToolStripMenuItem;
    endermanThemeToolStripMenuItem: ToolStripMenuItem;
    programmingThemeToolStripMenuItem: ToolStripMenuItem;
    fullscreenModeToolStripMenuItem: ToolStripMenuItem;
    printToolStripMenuItem: ToolStripMenuItem;
    printDocument1: System.Drawing.Printing.PrintDocument;
    printPreviewDialog1: PrintPreviewDialog;
    closeToolStripMenuItem: ToolStripMenuItem;
    textBox1: TextBox;
    timer1: Timer;
    wordWrapToolStripMenuItem: ToolStripMenuItem;
    vaporwaveThemeToolStripMenuItem: ToolStripMenuItem;
    waterThemeToolStripMenuItem: ToolStripMenuItem;
    evilRedThemeToolStripMenuItem: ToolStripMenuItem;
    toolStripSplitButton1: ToolStripSplitButton;
    panel1: Panel;
    tabControl1: TabControl;
    tabPage1: TabPage;
    consoleControl1: ConsoleControl.ConsoleControl;
    timer2: Timer;
    editorSettingsToolStripMenuItem: ToolStripMenuItem;
    {$include Unit1.Form1.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure Form1.settingsToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  // StandalIDE stops being always on top so you can see the settings window.
  alwaysOnTopToolStripMenuItem.Checked := false;
  TopMost := false;
  Form(new SettingsForm).show;
end;

procedure Form1.Form1_FormClosed(sender: Object; e: FormClosedEventArgs);
begin
  // Stop all processes running before closing.
  consoleControl1.StopProcess;
  halt;
end;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
  // Load settings.
  Loading.Show;
  try
    var DefThemeSettingFile := new System.IO.StreamReader(Environment.GetCommandLineArgs[0].Replace('StandalIDE.exe', '') + 'settings1.cfg', System.Text.Encoding.Default);
    DefThemeSetting := DefThemeSettingFile.ReadLine;
    DefThemeSettingFile.Close;
  except
  end;
  try
    var AOTATSettingFile := new System.IO.StreamReader(Environment.GetCommandLineArgs[0].Replace('StandalIDE.exe', '') + 'settings2.cfg', System.Text.Encoding.Default);
    AOTATSetting := AOTATSettingFile.ReadLine;
    AOTATSettingFile.Close;
  except
    AOTATSetting := 'False';
  end;
  try
    var FATSettingFile := new System.IO.StreamReader(Environment.GetCommandLineArgs[0].Replace('StandalIDE.exe', '') + 'settings3.cfg', System.Text.Encoding.Default);
    FATSetting := FATSettingFile.ReadLine;
    FATSettingFile.Close;
  except
    FATSetting := 'False';
  end;
  try
    var WWASSettingFile := new System.IO.StreamReader(Environment.GetCommandLineArgs[0].Replace('StandalIDE.exe', '') + 'settings4.cfg', System.Text.Encoding.Default);
    WWASSetting := WWASSettingFile.ReadLine;
    WWASSettingFile.Close;
  except
    WWASSetting := 'False';
  end;
  // Apply settings.
  if(DefThemeSetting = 'Light') then begin
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
    textBox1.BackColor := System.Drawing.SystemColors.Window;
    textBox1.ForeColor := System.Drawing.SystemColors.WindowText;
  end;
  if(DefThemeSetting = 'Night') then begin
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := true;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
    textBox1.BackColor := System.Drawing.Color.FromArgb(0, 0, 0);
    textBox1.ForeColor := System.Drawing.Color.FromArgb(255, 96, 0);
  end;
  if(DefThemeSetting = 'Programming') then begin
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := true;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
    textBox1.BackColor := System.Drawing.Color.FromArgb(0, 0, 0);
    textBox1.ForeColor := System.Drawing.Color.FromArgb(0, 255, 0);
  end;
  if(DefThemeSetting = 'Blue') then begin
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := true;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
    textBox1.BackColor := System.Drawing.Color.FromArgb(0, 0, 0);
    textBox1.ForeColor := System.Drawing.Color.FromArgb(5, 5, 255);
  end;
  if(DefThemeSetting = 'Enderman') then begin
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := true;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
    textBox1.BackColor := System.Drawing.Color.FromArgb(0, 0, 0);
    textBox1.ForeColor := System.Drawing.Color.FromArgb(255, 0, 255);
  end;
  if(DefThemeSetting = 'Ralsei') then begin
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := true;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
    textBox1.BackColor := System.Drawing.Color.FromArgb(64, 0, 64);
    textBox1.ForeColor := System.Drawing.Color.FromArgb(0, 255, 0);
  end;
  if(DefThemeSetting = 'Vaporeon') then begin
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := true;
    evilRedThemeToolStripMenuItem.Checked := false;
    textBox1.BackColor := System.Drawing.Color.FromArgb(0, 32, 64);
    textBox1.ForeColor := System.Drawing.Color.FromArgb(0, 255, 255);
  end;
  if(DefThemeSetting = 'Evil') then begin
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := true;
    textBox1.BackColor := System.Drawing.Color.FromArgb(48, 0, 0);
    textBox1.ForeColor := System.Drawing.Color.FromArgb(255, 0, 0);
  end;
  if(AOTATSetting = 'True') then
  begin
    alwaysOnTopToolStripMenuItem.Checked := true;
    TopMost := true;
  end;
  if(FATSetting = 'True') then timer1.Enabled := true;
  if(WWASSetting = 'True') then
  begin
    wordWrapToolStripMenuItem.Checked := true;
    textBox1.WordWrap := true;
  end;
  // If the program was opened with a text file location in the cmd argument, show it.
  try
    var OpenedTextFile := new System.IO.StreamReader(Environment.GetCommandLineArgs[1], System.Text.Encoding.Default);
    ParseTextEncoding.Text := OpenedTextFile.ReadToEnd;
    OpenedTextFile.Close;
    textBox1.Lines := ParseTextEncoding.Lines;
  except
  end;
  // Console initialisation
  consoleControl1.StartProcess('cmd', '');
  // The timer is present here to let the console initialise before trying to interact with it.
  timer2.Enabled := true;
end;

procedure Form1.lightThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  // The reason I wrote all the theme changes in such a funky way was to make it render less.
  if(lightThemeToolStripMenuItem.Checked = true) then begin
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
    textBox1.BackColor := System.Drawing.SystemColors.Window;
    textBox1.ForeColor := System.Drawing.SystemColors.WindowText;
  end
  else begin
    lightThemeToolStripMenuItem.Checked := true;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
  end;
end;

procedure Form1.darkThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  if(darkThemeToolStripMenuItem.Checked = true) then begin
    lightThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
    textBox1.BackColor := System.Drawing.Color.FromArgb(15, 15, 15);
    textBox1.ForeColor := System.Drawing.Color.White;
  end
  else begin
    darkThemeToolStripMenuItem.Checked := true;
    lightThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
  end;
end;

procedure Form1.openToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  openFileDialog1.ShowDialog;
end;

procedure Form1.saveToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  saveFileDialog1.ShowDialog;
end;

procedure Form1.fontToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  fontDialog1.ShowDialog;
  textBox1.Font := fontDialog1.Font;
end;

procedure Form1.fontToolStripMenuItem1_Click(sender: Object; e: EventArgs);
begin
  fontDialog1.ShowDialog;
  textBox1.Font := fontDialog1.Font;
end;

procedure Form1.aboutToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  // StandalIDE stops being always on top so you can see the about window.
  alwaysOnTopToolStripMenuItem.Checked := false;
  TopMost := false;
  Form(new AboutStandalIDE).show;
end;

procedure Form1.saveFileDialog1_FileOk(sender: Object; e: CancelEventArgs);
begin
  var f := new System.IO.StreamWriter(saveFileDialog1.FileName, false, System.Text.Encoding.Default);
  f.Write(textBox1.Text);
  f.Close;
  ToolStripStatusLabel1.Text := 'Saved';
  TextEdited := false;
end;

procedure Form1.openFileDialog1_FileOk(sender: Object; e: CancelEventArgs);
begin
  try
    var ScriptToOpen := new System.IO.StreamReader(openFileDialog1.FileName, System.Text.Encoding.Default);
    ParseTextEncoding.Text := ScriptToOpen.ReadToEnd;
    ScriptToOpen.Close;
    textBox1.Lines := ParseTextEncoding.Lines;
    toolStripStatusLabel1.Text := 'Ready';
    TextEdited := false;
  except
    toolStripStatusLabel1.Text := 'Unable to open file';
  end;
end;

procedure Form1.textBox1_TextChanged(sender: Object; e: EventArgs);
begin
  // If text was edited, TextEdited becomes true so if the user closes StandalIDE, it notifies about unsaved changes.
  TextEdited := true;
  toolStripStatusLabel1.Text := 'Ready';
end;

procedure Form1.Form1_FormClosing(sender: Object; e: FormClosingEventArgs);
begin
  // If there are unsaved changes, prevent StandalIDE from closing and notify about them.
  if(TextEdited) then begin
    e.Cancel := true;
    Form(new UCForm).show;
  end;
end;

procedure Form1.alwaysOnTopToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  TopMost := alwaysOnTopToolStripMenuItem.Checked;
end;

procedure Form1.nightThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  if(nightThemeToolStripMenuItem.Checked = true) then begin
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
    textBox1.BackColor := System.Drawing.Color.FromArgb(0, 0, 0);
    textBox1.ForeColor := System.Drawing.Color.FromArgb(255, 96, 0);
  end
  else begin
    nightThemeToolStripMenuItem.Checked := true;
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
  end;
end;

procedure Form1.blueThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  if(blueThemeToolStripMenuItem.Checked = true) then begin
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
    textBox1.BackColor := System.Drawing.Color.FromArgb(0, 0, 0);
    textBox1.ForeColor := System.Drawing.Color.FromArgb(5, 5, 255);
  end
  else begin
    blueThemeToolStripMenuItem.Checked := true;
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
  end;
end;

procedure Form1.endermanThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  if(endermanThemeToolStripMenuItem.Checked = true) then begin
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
    textBox1.BackColor := System.Drawing.Color.FromArgb(0, 0, 0);
    textBox1.ForeColor := System.Drawing.Color.FromArgb(255, 0, 255);
  end
  else begin
    endermanThemeToolStripMenuItem.Checked := true;
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
  end;
end;

procedure Form1.programmingThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  if(programmingThemeToolStripMenuItem.Checked = true) then begin
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
    textBox1.BackColor := System.Drawing.Color.FromArgb(0, 0, 0);
    textBox1.ForeColor := System.Drawing.Color.FromArgb(0, 255, 0);
  end
  else begin
    programmingThemeToolStripMenuItem.Checked := true;
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
  end;
end;

procedure Form1.fullscreenModeToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  if(fullscreenModeToolStripMenuItem.Checked = true) then begin
    WindowState := System.Windows.Forms.FormWindowState.Normal;
    FormBorderStyle := System.Windows.Forms.FormBorderStyle.None;
    WindowState := System.Windows.Forms.FormWindowState.Maximized;
  end else begin
    FormBorderStyle := System.Windows.Forms.FormBorderStyle.Sizable;
    WindowState := System.Windows.Forms.FormWindowState.Normal;
  end;
end;

procedure Form1.printToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  printPreviewDialog1.ShowDialog;
end;

procedure Form1.printDocument1_PrintPage(sender: Object; e: Drawing.Printing.PrintPageEventArgs);
begin
  e.Graphics.DrawString(textBox1.Text, textBox1.Font, Brushes.Black, 45, 45);
end;

procedure Form1.closeToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  halt;
end;

procedure Form1.editorSettingsToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  // Creates a temporary setting file to let the settings form know to open the "Editor" tab. It gets deleted instantly after.
  WriteLines(Environment.GetCommandLineArgs[0].Replace('StandalIDE.exe', '') + 'OpenEditorSettings.cfg', 'True'.Split);
  Form(new SettingsForm).show;
end;

procedure Form1.timer1_Tick(sender: Object; e: EventArgs);
begin
  // This timer is present to fix a bug with the program icon not showing up when switching to fullscreen mode on start.
  timer1.Enabled := false;
  fullscreenModeToolStripMenuItem.Checked := true;
  FormBorderStyle := System.Windows.Forms.FormBorderStyle.None;
  WindowState := System.Windows.Forms.FormWindowState.Maximized;
end;

procedure Form1.wordWrapToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  if(wordWrapToolStripMenuItem.Checked) then textBox1.WordWrap := true else textBox1.WordWrap := false;
end;

procedure Form1.vaporwaveThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  if(vaporwaveThemeToolStripMenuItem.Checked = true) then begin
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
    textBox1.BackColor := System.Drawing.Color.FromArgb(64, 0, 64);
    textBox1.ForeColor := System.Drawing.Color.FromArgb(0, 255, 0);
  end
  else begin
    vaporwaveThemeToolStripMenuItem.Checked := true;
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
  end;
end;

procedure Form1.waterThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  if(waterThemeToolStripMenuItem.Checked = true) then begin
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
    textBox1.BackColor := System.Drawing.Color.FromArgb(0, 32, 64);
    textBox1.ForeColor := System.Drawing.Color.FromArgb(0, 255, 255);
  end
  else begin
    waterThemeToolStripMenuItem.Checked := true;
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    evilRedThemeToolStripMenuItem.Checked := false;
  end;
end;

procedure Form1.contextMenuStrip1_Opening(sender: Object; e: CancelEventArgs);
begin
  
end;

procedure Form1.evilRedThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  // Fun fact: the name for the theme "Evil Red" was inspired from the Winamp Bento colour scheme with the same name.
  if(evilRedThemeToolStripMenuItem.Checked = true) then begin
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
    textBox1.BackColor := System.Drawing.Color.FromArgb(48, 0, 0);
    textBox1.ForeColor := System.Drawing.Color.FromArgb(255, 0, 0);
  end
  else begin
    evilRedThemeToolStripMenuItem.Checked := true;
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    vaporwaveThemeToolStripMenuItem.Checked := false;
    waterThemeToolStripMenuItem.Checked := false;
  end;
end;

procedure Form1.toolStripSplitButton1_ButtonClick(sender: Object; e: EventArgs);
begin
  panel1.Visible := not panel1.Visible;
  if(ConsoleOpenedOnce = false) then begin
    consoleControl1.WriteOutput('Terminal started.', System.Drawing.Color.Lime);
    consoleControl1.WriteInput('', System.Drawing.Color.White, false);
    ConsoleOpenedOnce := true;
  end;
end;

procedure Form1.timer2_Tick(sender: Object; e: EventArgs);
begin
  timer2.Enabled := false;
  consoleControl1.ClearOutput;
  consoleControl1.Visible := true;
  consoleControl1.WriteInput('', System.Drawing.Color.White, false);
  // Finish initialisation
  Loading.Close;
  ShowInTaskbar := true;
  WindowState := System.Windows.Forms.FormWindowState.Normal;
end;

end.
