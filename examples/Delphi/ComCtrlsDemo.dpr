program ComCtrlsDemo;

uses
  Forms,
  ComCtrlsMain in 'ComCtrlsMain.pas' {frmComCtrls};

{$R *.res}

begin
  Application.Initialize;
  Application.MainFormOnTaskbar := True;
  Application.CreateForm(TfrmComCtrls, frmComCtrls);
  Application.Run;
end.
