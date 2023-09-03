unit About;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  AboutStandalIDE = class(Form)
    procedure linkLabel1_LinkClicked(sender: Object; e: LinkLabelLinkClickedEventArgs);
  {$region FormDesigner}
  private
    {$resource About.AboutStandalIDE.resources}
    tabControl1: TabControl;
    tabPage1: TabPage;
    richTextBox1: RichTextBox;
    linkLabel1: LinkLabel;
    tabPage2: TabPage;
    richTextBox2: RichTextBox;
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

end.
