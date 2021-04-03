﻿unit Unit1;

interface

uses System, System.ComponentModel, System.Drawing, System.Windows.Forms, Settings, About;

var
  DefThemeSetting, AOTATSetting, FATSetting: string;

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
    procedure richTextBox1_TextChanged(sender: Object; e: EventArgs);
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
    richTextBox1: RichTextBox;
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
  alwaysOnTopToolStripMenuItem.Checked := false;
  TopMost := false;
  Form(new SettingsForm).show;
end;

procedure Form1.Form1_FormClosed(sender: Object; e: FormClosedEventArgs);
begin
  halt;
end;

procedure Form1.Form1_Load(sender: Object; e: EventArgs);
begin
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
  if(DefThemeSetting = 'Light') then begin
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    richTextBox1.BackColor := System.Drawing.SystemColors.Window;
    richTextBox1.ForeColor := System.Drawing.SystemColors.WindowText;
  end;
  if(DefThemeSetting = 'Night') then begin
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    richTextBox1.BackColor := System.Drawing.Color.FromArgb(0, 0, 0);;
    richTextBox1.ForeColor := System.Drawing.Color.FromArgb(255, 96, 0);
  end;
  if(DefThemeSetting = 'Programming') then begin
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := true;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    richTextBox1.BackColor := System.Drawing.Color.FromArgb(0, 0, 0);;
    richTextBox1.ForeColor := System.Drawing.Color.FromArgb(0, 255, 0);
  end;
  if(DefThemeSetting = 'Blue') then begin
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := true;
    endermanThemeToolStripMenuItem.Checked := false;
    richTextBox1.BackColor := System.Drawing.Color.FromArgb(0, 0, 0);;
    richTextBox1.ForeColor := System.Drawing.Color.FromArgb(5, 5, 255);
  end;
  if(DefThemeSetting = 'Enderman') then begin
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := true;
    richTextBox1.BackColor := System.Drawing.Color.FromArgb(0, 0, 0);;
    richTextBox1.ForeColor := System.Drawing.Color.FromArgb(255, 0, 255);
  end;
  if(AOTATSetting = 'True') then
  begin
    alwaysOnTopToolStripMenuItem.Checked := true;
    TopMost := true;
  end;
  if(FATSetting = 'True') then
  begin
    fullscreenModeToolStripMenuItem.Checked := true;
    FormBorderStyle := System.Windows.Forms.FormBorderStyle.None;
    WindowState := System.Windows.Forms.FormWindowState.Maximized;
  end;
  try
    var OpenedTextFile := new System.IO.StreamReader(Environment.GetCommandLineArgs[1], System.Text.Encoding.Default);
    richTextBox1.Text := OpenedTextFile.ReadToEnd;
    OpenedTextFile.Close;
  except
  end;
end;

procedure Form1.lightThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  if(lightThemeToolStripMenuItem.Checked = true) then begin
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    richTextBox1.BackColor := System.Drawing.SystemColors.Window;
    richTextBox1.ForeColor := System.Drawing.SystemColors.WindowText;
  end
  else begin
    lightThemeToolStripMenuItem.Checked := true;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
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
    richTextBox1.BackColor := System.Drawing.Color.FromArgb(15, 15, 15);
    richTextBox1.ForeColor := System.Drawing.Color.White;
  end
  else begin
    darkThemeToolStripMenuItem.Checked := true;
    lightThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
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
  richTextBox1.Font := fontDialog1.Font;
end;

procedure Form1.fontToolStripMenuItem1_Click(sender: Object; e: EventArgs);
begin
  fontDialog1.ShowDialog;
  richTextBox1.Font := fontDialog1.Font;
end;

procedure Form1.aboutToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  alwaysOnTopToolStripMenuItem.Checked := false;
  TopMost := false;
  Form(new AboutStandalIDE).show;
end;

procedure Form1.saveFileDialog1_FileOk(sender: Object; e: CancelEventArgs);
begin
  var f := new System.IO.StreamWriter(saveFileDialog1.FileName, false, System.Text.Encoding.Default);
  f.Write(richTextBox1.Text);
  f.Close;
  ToolStripStatusLabel1.Text := 'Saved';
end;

procedure Form1.openFileDialog1_FileOk(sender: Object; e: CancelEventArgs);
begin
  try
    var ScriptToOpen := new System.IO.StreamReader(openFileDialog1.FileName, System.Text.Encoding.Default);
    richTextBox1.Text := ScriptToOpen.ReadToEnd;
    ScriptToOpen.Close;
    toolStripStatusLabel1.Text := 'Ready';
  except
    toolStripStatusLabel1.Text := 'Unable to open file';
  end;
end;

procedure Form1.richTextBox1_TextChanged(sender: Object; e: EventArgs);
begin
  toolStripStatusLabel1.Text := 'Ready';
end;

procedure Form1.Form1_FormClosing(sender: Object; e: FormClosingEventArgs);
begin
  
end;

procedure Form1.alwaysOnTopToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  if(alwaysOnTopToolStripMenuItem.Checked = true) then
    TopMost := true
  else
    TopMost := false;
end;

procedure Form1.nightThemeToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  if(nightThemeToolStripMenuItem.Checked = true) then begin
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
    richTextBox1.BackColor := System.Drawing.Color.FromArgb(0, 0, 0);;
    richTextBox1.ForeColor := System.Drawing.Color.FromArgb(255, 96, 0);
  end
  else begin
    nightThemeToolStripMenuItem.Checked := true;
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
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
    richTextBox1.BackColor := System.Drawing.Color.FromArgb(0, 0, 0);;
    richTextBox1.ForeColor := System.Drawing.Color.FromArgb(5, 5, 255);
  end
  else begin
    blueThemeToolStripMenuItem.Checked := true;
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
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
    richTextBox1.BackColor := System.Drawing.Color.FromArgb(0, 0, 0);;
    richTextBox1.ForeColor := System.Drawing.Color.FromArgb(255, 0, 255);
  end
  else begin
    endermanThemeToolStripMenuItem.Checked := true;
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    programmingThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
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
    richTextBox1.BackColor := System.Drawing.Color.FromArgb(0, 0, 0);;
    richTextBox1.ForeColor := System.Drawing.Color.FromArgb(0, 255, 0);
  end
  else begin
    programmingThemeToolStripMenuItem.Checked := true;
    lightThemeToolStripMenuItem.Checked := false;
    darkThemeToolStripMenuItem.Checked := false;
    nightThemeToolStripMenuItem.Checked := false;
    blueThemeToolStripMenuItem.Checked := false;
    endermanThemeToolStripMenuItem.Checked := false;
  end;
end;

procedure Form1.fullscreenModeToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  if(fullscreenModeToolStripMenuItem.Checked = true) then begin
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
  e.Graphics.DrawString(richTextBox1.Text, richTextBox1.Font, Brushes.Black, 45, 45);
end;

procedure Form1.closeToolStripMenuItem_Click(sender: Object; e: EventArgs);
begin
  halt;
end;

end.