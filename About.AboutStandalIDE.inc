procedure InitializeComponent;
    begin
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(AboutStandalIDE));
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.tabControl1 := new System.Windows.Forms.TabControl();
        self.tabPage1 := new System.Windows.Forms.TabPage();
        self.richTextBox1 := new System.Windows.Forms.RichTextBox();
        self.tabPage2 := new System.Windows.Forms.TabPage();
        self.richTextBox2 := new System.Windows.Forms.RichTextBox();
        self.linkLabel1 := new System.Windows.Forms.LinkLabel();
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        self.tabControl1.SuspendLayout();
        self.tabPage1.SuspendLayout();
        self.tabPage2.SuspendLayout();
        self.SuspendLayout();
        // 
        // pictureBox1
        // 
        self.pictureBox1.BackColor := System.Drawing.Color.Transparent;
        self.pictureBox1.Image := (System.Drawing.Image(resources.GetObject('pictureBox1.Image')));
        self.pictureBox1.Location := new System.Drawing.Point(12, 85);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(64, 64);
        self.pictureBox1.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox1.TabIndex := 0;
        self.pictureBox1.TabStop := false;
        // 
        // tabControl1
        // 
        self.tabControl1.Controls.Add(self.tabPage1);
        self.tabControl1.Controls.Add(self.tabPage2);
        self.tabControl1.Location := new System.Drawing.Point(182, 12);
        self.tabControl1.Name := 'tabControl1';
        self.tabControl1.SelectedIndex := 0;
        self.tabControl1.Size := new System.Drawing.Size(240, 208);
        self.tabControl1.TabIndex := 1;
        // 
        // tabPage1
        // 
        self.tabPage1.Controls.Add(self.richTextBox1);
        self.tabPage1.Location := new System.Drawing.Point(4, 22);
        self.tabPage1.Name := 'tabPage1';
        self.tabPage1.Padding := new System.Windows.Forms.Padding(3);
        self.tabPage1.Size := new System.Drawing.Size(232, 182);
        self.tabPage1.TabIndex := 0;
        self.tabPage1.Text := 'License';
        self.tabPage1.UseVisualStyleBackColor := true;
        // 
        // richTextBox1
        // 
        self.richTextBox1.Dock := System.Windows.Forms.DockStyle.Fill;
        self.richTextBox1.Location := new System.Drawing.Point(3, 3);
        self.richTextBox1.Name := 'richTextBox1';
        self.richTextBox1.ReadOnly := true;
        self.richTextBox1.Size := new System.Drawing.Size(226, 176);
        self.richTextBox1.TabIndex := 0;
        self.richTextBox1.Text := resources.GetString('richTextBox1.Text');
        self.richTextBox1.WordWrap := false;
        // 
        // tabPage2
        // 
        self.tabPage2.Controls.Add(self.richTextBox2);
        self.tabPage2.Location := new System.Drawing.Point(4, 22);
        self.tabPage2.Name := 'tabPage2';
        self.tabPage2.Padding := new System.Windows.Forms.Padding(3);
        self.tabPage2.Size := new System.Drawing.Size(232, 182);
        self.tabPage2.TabIndex := 1;
        self.tabPage2.Text := 'Information';
        self.tabPage2.UseVisualStyleBackColor := true;
        // 
        // richTextBox2
        // 
        self.richTextBox2.Dock := System.Windows.Forms.DockStyle.Fill;
        self.richTextBox2.Location := new System.Drawing.Point(3, 3);
        self.richTextBox2.Name := 'richTextBox2';
        self.richTextBox2.ReadOnly := true;
        self.richTextBox2.Size := new System.Drawing.Size(226, 176);
        self.richTextBox2.TabIndex := 1;
        self.richTextBox2.Text := resources.GetString('richTextBox2.Text');
        // 
        // linkLabel1
        // 
        self.linkLabel1.BackColor := System.Drawing.Color.Transparent;
        self.linkLabel1.Font := new System.Drawing.Font('Segoe UI Semilight', 12, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.linkLabel1.ForeColor := System.Drawing.Color.White;
        self.linkLabel1.LinkArea := new System.Windows.Forms.LinkArea(15, 15);
        self.linkLabel1.LinkColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(5)))), (System.Int32((System.Byte(195)))), (System.Int32((System.Byte(255)))));
        self.linkLabel1.Location := new System.Drawing.Point(12, 161);
        self.linkLabel1.Name := 'linkLabel1';
        self.linkLabel1.Size := new System.Drawing.Size(164, 88);
        self.linkLabel1.TabIndex := 2;
        self.linkLabel1.TabStop := true;
        self.linkLabel1.Text := 'StandalIDE'#13#10'By Michael Agarkov'#13#10'Version 2024.1'#13#10'Revision 1';
        self.linkLabel1.UseCompatibleTextRendering := true;
        self.linkLabel1.LinkClicked += linkLabel1_LinkClicked;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(347, 226);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 3;
        self.button1.Text := 'Close';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(266, 226);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(75, 23);
        self.button2.TabIndex := 4;
        self.button2.Text := 'GitHub repo';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // AboutStandalIDE
        // 
        self.BackgroundImage := (System.Drawing.Image(resources.GetObject('$this.BackgroundImage')));
        self.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.ClientSize := new System.Drawing.Size(434, 261);
        self.Controls.Add(self.button2);
        self.Controls.Add(self.button1);
        self.Controls.Add(self.linkLabel1);
        self.Controls.Add(self.tabControl1);
        self.Controls.Add(self.pictureBox1);
        self.DoubleBuffered := true;
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.MinimizeBox := false;
        self.Name := 'AboutStandalIDE';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'About StandalIDE';
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        self.tabControl1.ResumeLayout(false);
        self.tabPage1.ResumeLayout(false);
        self.tabPage2.ResumeLayout(false);
        self.ResumeLayout(false);
    end;
