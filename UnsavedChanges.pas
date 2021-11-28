unit UnsavedChanges;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  UCForm = class(Form)
    procedure button1_Click(sender: Object; e: EventArgs);
    procedure button2_Click(sender: Object; e: EventArgs);
  {$region FormDesigner}
  private
    {$resource UnsavedChanges.UCForm.resources}
    label1: &Label;
    button1: Button;
    button2: Button;
    pictureBox1: PictureBox;
    {$include UnsavedChanges.UCForm.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

procedure UCForm.button1_Click(sender: Object; e: EventArgs);
begin
  halt;
end;

procedure UCForm.button2_Click(sender: Object; e: EventArgs);
begin
  Close;
end;

end.
