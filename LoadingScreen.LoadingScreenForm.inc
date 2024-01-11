procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(LoadingScreenForm));
        self.progressBar1 := new System.Windows.Forms.ProgressBar();
        self.label1 := new System.Windows.Forms.Label();
        self.SuspendLayout();
        // 
        // progressBar1
        // 
        self.progressBar1.Location := new System.Drawing.Point(6, 234);
        self.progressBar1.Maximum := 1;
        self.progressBar1.Name := 'progressBar1';
        self.progressBar1.Size := new System.Drawing.Size(438, 10);
        self.progressBar1.Style := System.Windows.Forms.ProgressBarStyle.Marquee;
        self.progressBar1.TabIndex := 0;
        self.progressBar1.UseWaitCursor := true;
        // 
        // label1
        // 
        self.label1.BackColor := System.Drawing.Color.Transparent;
        self.label1.Font := new System.Drawing.Font('Segoe UI Semilight', 20.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.ForeColor := System.Drawing.Color.White;
        self.label1.Location := new System.Drawing.Point(12, 150);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(426, 81);
        self.label1.TabIndex := 1;
        self.label1.Text := 'StandalIDE'#13#10'2024.1';
        self.label1.UseWaitCursor := true;
        // 
        // LoadingScreenForm
        // 
        self.BackgroundImage := (System.Drawing.Image(resources.GetObject('$this.BackgroundImage')));
        self.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.ClientSize := new System.Drawing.Size(450, 250);
        self.Controls.Add(self.label1);
        self.Controls.Add(self.progressBar1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.None;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.Name := 'LoadingScreenForm';
        self.Opacity := 0.95;
        self.ShowIcon := false;
        self.ShowInTaskbar := false;
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'Loading...';
        self.TopMost := true;
        self.UseWaitCursor := true;
        self.ResumeLayout(false);
    end;
