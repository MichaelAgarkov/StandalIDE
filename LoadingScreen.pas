unit LoadingScreen;

interface

uses System, System.Drawing, System.Windows.Forms;

type
  LoadingScreenForm = class(Form)
  {$region FormDesigner}
  private
    {$resource LoadingScreen.LoadingScreenForm.resources}
    label1: &Label;
    progressBar1: ProgressBar;
    {$include LoadingScreen.LoadingScreenForm.inc}
  {$endregion FormDesigner}
  public 
    constructor;
    begin
      InitializeComponent;
    end;
  end;

implementation

end.
