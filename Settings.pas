unit Settings;

interface

uses System, System.Drawing, System.Windows.Forms;

var
  setting1, setting2, setting3, setting4, OpenEditorSettingsPanel: string;

type
  SettingsForm = class(Form)
    procedure SettingsForm_Load(sender: Object; e: EventArgs);
    procedure treeView1_AfterSelect(sender: Object; e: TreeViewEventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
    procedure button3_Click(sender: Object; e: EventArgs);
    procedure button4_Click(sender: Object; e: EventArgs);
    procedure button5_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource Settings.SettingsForm.resources}
    treeView1: TreeView;
    panel2: Panel;
    button3: Button;
    button2: Button;
    button1: Button;
    imageList1: ImageList;
    components: System.ComponentModel.IContainer;
    pictureBox2: PictureBox;
    pictureBox1: PictureBox;
    panel3: Panel;
    panel4: Panel;
    label2: &Label;
    label1: &Label;
    button4: Button;
    button5: Button;
    label3: &Label;
    DefThemeComboBox: ComboBox;
    checkBox1: CheckBox;
    checkBox2: CheckBox;
    checkBox3: CheckBox;
    panel1: Panel;
    {$include Settings.SettingsForm.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure SettingsForm.SettingsForm_Load(sender: Object; e: EventArgs);
begin
  try
    var Settings1File := new System.IO.StreamReader(Environment.GetCommandLineArgs[0].Replace('StandalIDE.exe', '') + 'settings1.cfg', System.Text.Encoding.Default);
    setting1 := Settings1File.ReadLine;
    Settings1File.Close;
  except
    DefThemeComboBox.Text := 'Dark theme';
  end;
  try
    var Settings2File := new System.IO.StreamReader(Environment.GetCommandLineArgs[0].Replace('StandalIDE.exe', '') + 'settings2.cfg', System.Text.Encoding.Default);
    setting2 := Settings2File.ReadLine;
    Settings2File.Close;
  except
    checkBox1.Checked := false;
  end;
  try
    var Settings3File := new System.IO.StreamReader(Environment.GetCommandLineArgs[0].Replace('StandalIDE.exe', '') + 'settings3.cfg', System.Text.Encoding.Default);
    setting3 := Settings3File.ReadLine;
    Settings3File.Close;
  except
    checkBox2.Checked := false;
  end;
  try
    var Settings4File := new System.IO.StreamReader(Environment.GetCommandLineArgs[0].Replace('StandalIDE.exe', '') + 'settings4.cfg', System.Text.Encoding.Default);
    setting4 := Settings4File.ReadLine;
    Settings4File.Close;
  except
    checkBox3.Checked := false;
  end;
  if(setting1 = 'Light') then DefThemeComboBox.SelectedItem := 'Light theme';
  if(setting1 = 'Dark') then DefThemeComboBox.SelectedItem := 'Dark theme';
  if(setting1 = 'Night') then DefThemeComboBox.SelectedItem := 'Night theme';
  if(setting1 = 'Programming') then DefThemeComboBox.SelectedItem := 'Programming theme';
  if(setting1 = 'Blue') then DefThemeComboBox.SelectedItem := 'Blue theme';
  if(setting1 = 'Enderman') then DefThemeComboBox.SelectedItem := 'Enderman theme';
  if(setting2 = 'True') then checkBox1.Checked := true;
  if(setting2 = 'False') then checkBox1.Checked := false;
  if(setting3 = 'True') then checkBox2.Checked := true;
  if(setting3 = 'False') then checkBox2.Checked := false;
  if(setting4 = 'True') then checkBox3.Checked := true;
  if(setting4 = 'False') then checkBox3.Checked := false;
  OpenEditorSettingsPanel := 'False';
  try
    var OpenEditorSettingsFile := new System.IO.StreamReader(Environment.GetCommandLineArgs[0].Replace('StandalIDE.exe', '') + 'OpenEditorSettings.cfg', System.Text.Encoding.Default);
    OpenEditorSettingsPanel := OpenEditorSettingsFile.ReadLine;
    OpenEditorSettingsFile.Close;
  except
  end;
  System.IO.File.Delete(Environment.GetCommandLineArgs[0].Replace('StandalIDE.exe', '') + 'OpenEditorSettings.cfg');
  if(OpenEditorSettingsPanel = 'True') then treeView1.SelectedNode := treeView1.Nodes[1];
end;

procedure SettingsForm.treeView1_AfterSelect(sender: Object; e: TreeViewEventArgs);
begin
  if(treeView1.SelectedNode = treeView1.Nodes[0]) then
  begin
    panel3.Visible := true;
    panel4.Visible := false;
    pictureBox1.Visible := true;
    pictureBox2.Visible := false;
    label1.Text := 'General';
    label2.Text := 'The general settings for the program';
  end;
  if(treeView1.SelectedNode = treeView1.Nodes[1]) then
  begin
    pictureBox2.Visible := true;
    pictureBox1.Visible := false;
    panel4.Visible := true;
    panel3.Visible := false;
    label1.Text := 'Editor';
    label2.Text := 'The IDE editor settings';
  end;
end;

procedure SettingsForm.button1_Click(sender: Object; e: EventArgs);
begin
  WriteLines(Environment.GetCommandLineArgs[0].Replace('StandalIDE.exe', '') + 'settings1.cfg', DefThemeComboBox.Text.Replace(' theme', '').Split);
  WriteLines(Environment.GetCommandLineArgs[0].Replace('StandalIDE.exe', '') + 'settings2.cfg', checkBox1.Checked.ToString.Split);
  WriteLines(Environment.GetCommandLineArgs[0].Replace('StandalIDE.exe', '') + 'settings3.cfg', checkBox2.Checked.ToString.Split);
  WriteLines(Environment.GetCommandLineArgs[0].Replace('StandalIDE.exe', '') + 'settings4.cfg', checkBox3.Checked.ToString.Split);
  Close;
end;

procedure SettingsForm.button2_Click(sender: Object; e: EventArgs);
begin
  WriteLines(Environment.GetCommandLineArgs[0].Replace('StandalIDE.exe', '') + 'settings1.cfg', DefThemeComboBox.Text.Replace(' theme', '').Split);
  WriteLines(Environment.GetCommandLineArgs[0].Replace('StandalIDE.exe', '') + 'settings2.cfg', checkBox1.Checked.ToString.Split);
  WriteLines(Environment.GetCommandLineArgs[0].Replace('StandalIDE.exe', '') + 'settings3.cfg', checkBox2.Checked.ToString.Split);
  WriteLines(Environment.GetCommandLineArgs[0].Replace('StandalIDE.exe', '') + 'settings4.cfg', checkBox3.Checked.ToString.Split);
end;

procedure SettingsForm.button3_Click(sender: Object; e: EventArgs);
begin
  Close;
end;

procedure SettingsForm.button4_Click(sender: Object; e: EventArgs);
begin
  checkBox1.Checked := false;
  checkBox2.Checked := false;
  checkBox3.Checked := false;
end;

procedure SettingsForm.button5_Click(sender: Object; e: EventArgs);
begin
  DefThemeComboBox.Text := 'Dark theme';
end;

end.
