unit About;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  AboutStandalIDE = class(Form)
    procedure linkLabel1_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource About.AboutStandalIDE.resources}
    tabControl1: TabControl;
    tabPage1: TabPage;
    richTextBox1: RichTextBox;
    linkLabel1: LinkLabel;
    tabPage2: TabPage;
    richTextBox2: RichTextBox;
    button1: Button;
    button2: Button;
    pictureBox1: PictureBox;
    {$include About.AboutStandalIDE.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure AboutStandalIDE.linkLabel1_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
begin
  exec('https://github.com/MichaelAgarkov');
end;

procedure AboutStandalIDE.button1_Click(sender: Object; e: EventArgs);
begin
  Close;
end;

procedure AboutStandalIDE.button2_Click(sender: Object; e: EventArgs);
begin
  exec('https://github.com/MichaelAgarkov/StandalIDE');
end;

end.
