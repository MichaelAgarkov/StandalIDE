procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(Form1));
        self.menuStrip1 := new System.Windows.Forms.MenuStrip();
        self.fileToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.openToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.saveToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.printToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripSeparator1 := new System.Windows.Forms.ToolStripSeparator();
        self.fontToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.toolStripSeparator2 := new System.Windows.Forms.ToolStripSeparator();
        self.settingsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.alwaysOnTopToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.fullscreenModeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.themesToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.lightThemeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.darkThemeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.nightThemeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.programmingThemeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.blueThemeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.endermanThemeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.aboutToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.statusStrip1 := new System.Windows.Forms.StatusStrip();
        self.toolStripStatusLabel1 := new System.Windows.Forms.ToolStripStatusLabel();
        self.richTextBox1 := new System.Windows.Forms.RichTextBox();
        self.contextMenuStrip1 := new System.Windows.Forms.ContextMenuStrip(self.components);
        self.fontToolStripMenuItem1 := new System.Windows.Forms.ToolStripMenuItem();
        self.saveFileDialog1 := new System.Windows.Forms.SaveFileDialog();
        self.openFileDialog1 := new System.Windows.Forms.OpenFileDialog();
        self.fontDialog1 := new System.Windows.Forms.FontDialog();
        self.printDocument1 := new System.Drawing.Printing.PrintDocument();
        self.printPreviewDialog1 := new System.Windows.Forms.PrintPreviewDialog();
        self.closeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.menuStrip1.SuspendLayout();
        self.statusStrip1.SuspendLayout();
        self.contextMenuStrip1.SuspendLayout();
        self.SuspendLayout();
        // 
        // menuStrip1
        // 
        self.menuStrip1.BackgroundImage := (System.Drawing.Image(resources.GetObject('menuStrip1.BackgroundImage')));
        self.menuStrip1.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.menuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[3](self.fileToolStripMenuItem, self.themesToolStripMenuItem, self.aboutToolStripMenuItem));
        self.menuStrip1.Location := new System.Drawing.Point(0, 0);
        self.menuStrip1.Name := 'menuStrip1';
        self.menuStrip1.RenderMode := System.Windows.Forms.ToolStripRenderMode.Professional;
        self.menuStrip1.Size := new System.Drawing.Size(584, 24);
        self.menuStrip1.TabIndex := 1;
        self.menuStrip1.Text := 'menuStrip1';
        // 
        // fileToolStripMenuItem
        // 
        self.fileToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[10](self.openToolStripMenuItem, self.saveToolStripMenuItem, self.printToolStripMenuItem, self.toolStripSeparator1, self.fontToolStripMenuItem, self.toolStripSeparator2, self.settingsToolStripMenuItem, self.alwaysOnTopToolStripMenuItem, self.fullscreenModeToolStripMenuItem, self.closeToolStripMenuItem));
        self.fileToolStripMenuItem.ForeColor := System.Drawing.Color.White;
        self.fileToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('fileToolStripMenuItem.Image')));
        self.fileToolStripMenuItem.Name := 'fileToolStripMenuItem';
        self.fileToolStripMenuItem.Size := new System.Drawing.Size(53, 20);
        self.fileToolStripMenuItem.Text := 'File';
        // 
        // openToolStripMenuItem
        // 
        self.openToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('openToolStripMenuItem.Image')));
        self.openToolStripMenuItem.Name := 'openToolStripMenuItem';
        self.openToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.O)));
        self.openToolStripMenuItem.Size := new System.Drawing.Size(189, 22);
        self.openToolStripMenuItem.Text := 'Open';
        self.openToolStripMenuItem.Click += openToolStripMenuItem_Click;
        // 
        // saveToolStripMenuItem
        // 
        self.saveToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('saveToolStripMenuItem.Image')));
        self.saveToolStripMenuItem.Name := 'saveToolStripMenuItem';
        self.saveToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.S)));
        self.saveToolStripMenuItem.Size := new System.Drawing.Size(189, 22);
        self.saveToolStripMenuItem.Text := 'Save';
        self.saveToolStripMenuItem.Click += saveToolStripMenuItem_Click;
        // 
        // printToolStripMenuItem
        // 
        self.printToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('printToolStripMenuItem.Image')));
        self.printToolStripMenuItem.Name := 'printToolStripMenuItem';
        self.printToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.P)));
        self.printToolStripMenuItem.Size := new System.Drawing.Size(189, 22);
        self.printToolStripMenuItem.Text := 'Print';
        self.printToolStripMenuItem.Click += printToolStripMenuItem_Click;
        // 
        // toolStripSeparator1
        // 
        self.toolStripSeparator1.Name := 'toolStripSeparator1';
        self.toolStripSeparator1.Size := new System.Drawing.Size(186, 6);
        // 
        // fontToolStripMenuItem
        // 
        self.fontToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('fontToolStripMenuItem.Image')));
        self.fontToolStripMenuItem.Name := 'fontToolStripMenuItem';
        self.fontToolStripMenuItem.Size := new System.Drawing.Size(189, 22);
        self.fontToolStripMenuItem.Text := 'Font';
        self.fontToolStripMenuItem.Click += fontToolStripMenuItem_Click;
        // 
        // toolStripSeparator2
        // 
        self.toolStripSeparator2.Name := 'toolStripSeparator2';
        self.toolStripSeparator2.Size := new System.Drawing.Size(186, 6);
        // 
        // settingsToolStripMenuItem
        // 
        self.settingsToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('settingsToolStripMenuItem.Image')));
        self.settingsToolStripMenuItem.Name := 'settingsToolStripMenuItem';
        self.settingsToolStripMenuItem.Size := new System.Drawing.Size(189, 22);
        self.settingsToolStripMenuItem.Text := 'Settings';
        self.settingsToolStripMenuItem.Click += settingsToolStripMenuItem_Click;
        // 
        // alwaysOnTopToolStripMenuItem
        // 
        self.alwaysOnTopToolStripMenuItem.CheckOnClick := true;
        self.alwaysOnTopToolStripMenuItem.Name := 'alwaysOnTopToolStripMenuItem';
        self.alwaysOnTopToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.T)));
        self.alwaysOnTopToolStripMenuItem.Size := new System.Drawing.Size(189, 22);
        self.alwaysOnTopToolStripMenuItem.Text := 'Always on top';
        self.alwaysOnTopToolStripMenuItem.Click += alwaysOnTopToolStripMenuItem_Click;
        // 
        // fullscreenModeToolStripMenuItem
        // 
        self.fullscreenModeToolStripMenuItem.CheckOnClick := true;
        self.fullscreenModeToolStripMenuItem.Name := 'fullscreenModeToolStripMenuItem';
        self.fullscreenModeToolStripMenuItem.ShortcutKeys := System.Windows.Forms.Keys.F11;
        self.fullscreenModeToolStripMenuItem.Size := new System.Drawing.Size(189, 22);
        self.fullscreenModeToolStripMenuItem.Text := 'Fullscreen Mode';
        self.fullscreenModeToolStripMenuItem.Click += fullscreenModeToolStripMenuItem_Click;
        // 
        // themesToolStripMenuItem
        // 
        self.themesToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[6](self.lightThemeToolStripMenuItem, self.darkThemeToolStripMenuItem, self.nightThemeToolStripMenuItem, self.programmingThemeToolStripMenuItem, self.blueThemeToolStripMenuItem, self.endermanThemeToolStripMenuItem));
        self.themesToolStripMenuItem.ForeColor := System.Drawing.Color.White;
        self.themesToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('themesToolStripMenuItem.Image')));
        self.themesToolStripMenuItem.Name := 'themesToolStripMenuItem';
        self.themesToolStripMenuItem.Size := new System.Drawing.Size(76, 20);
        self.themesToolStripMenuItem.Text := 'Themes';
        // 
        // lightThemeToolStripMenuItem
        // 
        self.lightThemeToolStripMenuItem.CheckOnClick := true;
        self.lightThemeToolStripMenuItem.Name := 'lightThemeToolStripMenuItem';
        self.lightThemeToolStripMenuItem.Size := new System.Drawing.Size(185, 22);
        self.lightThemeToolStripMenuItem.Text := 'Light theme';
        self.lightThemeToolStripMenuItem.Click += lightThemeToolStripMenuItem_Click;
        // 
        // darkThemeToolStripMenuItem
        // 
        self.darkThemeToolStripMenuItem.BackColor := System.Drawing.SystemColors.ControlDarkDark;
        self.darkThemeToolStripMenuItem.Checked := true;
        self.darkThemeToolStripMenuItem.CheckOnClick := true;
        self.darkThemeToolStripMenuItem.CheckState := System.Windows.Forms.CheckState.Checked;
        self.darkThemeToolStripMenuItem.ForeColor := System.Drawing.Color.White;
        self.darkThemeToolStripMenuItem.Name := 'darkThemeToolStripMenuItem';
        self.darkThemeToolStripMenuItem.Size := new System.Drawing.Size(185, 22);
        self.darkThemeToolStripMenuItem.Text := 'Dark theme';
        self.darkThemeToolStripMenuItem.Click += darkThemeToolStripMenuItem_Click;
        // 
        // nightThemeToolStripMenuItem
        // 
        self.nightThemeToolStripMenuItem.BackColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(50)))), (System.Int32((System.Byte(50)))), (System.Int32((System.Byte(50)))));
        self.nightThemeToolStripMenuItem.CheckOnClick := true;
        self.nightThemeToolStripMenuItem.ForeColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(255)))), (System.Int32((System.Byte(128)))), (System.Int32((System.Byte(0)))));
        self.nightThemeToolStripMenuItem.Name := 'nightThemeToolStripMenuItem';
        self.nightThemeToolStripMenuItem.Size := new System.Drawing.Size(185, 22);
        self.nightThemeToolStripMenuItem.Text := 'Night theme';
        self.nightThemeToolStripMenuItem.Click += nightThemeToolStripMenuItem_Click;
        // 
        // programmingThemeToolStripMenuItem
        // 
        self.programmingThemeToolStripMenuItem.BackColor := System.Drawing.Color.Black;
        self.programmingThemeToolStripMenuItem.CheckOnClick := true;
        self.programmingThemeToolStripMenuItem.ForeColor := System.Drawing.Color.Lime;
        self.programmingThemeToolStripMenuItem.Name := 'programmingThemeToolStripMenuItem';
        self.programmingThemeToolStripMenuItem.Size := new System.Drawing.Size(185, 22);
        self.programmingThemeToolStripMenuItem.Text := 'Programming theme';
        self.programmingThemeToolStripMenuItem.Click += programmingThemeToolStripMenuItem_Click;
        // 
        // blueThemeToolStripMenuItem
        // 
        self.blueThemeToolStripMenuItem.BackColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(25)))), (System.Int32((System.Byte(25)))), (System.Int32((System.Byte(25)))));
        self.blueThemeToolStripMenuItem.CheckOnClick := true;
        self.blueThemeToolStripMenuItem.ForeColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(5)))), (System.Int32((System.Byte(5)))), (System.Int32((System.Byte(255)))));
        self.blueThemeToolStripMenuItem.Name := 'blueThemeToolStripMenuItem';
        self.blueThemeToolStripMenuItem.Size := new System.Drawing.Size(185, 22);
        self.blueThemeToolStripMenuItem.Text := 'Blue theme';
        self.blueThemeToolStripMenuItem.Click += blueThemeToolStripMenuItem_Click;
        // 
        // endermanThemeToolStripMenuItem
        // 
        self.endermanThemeToolStripMenuItem.BackColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(25)))), (System.Int32((System.Byte(25)))), (System.Int32((System.Byte(25)))));
        self.endermanThemeToolStripMenuItem.CheckOnClick := true;
        self.endermanThemeToolStripMenuItem.ForeColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(195)))), (System.Int32((System.Byte(0)))), (System.Int32((System.Byte(195)))));
        self.endermanThemeToolStripMenuItem.Name := 'endermanThemeToolStripMenuItem';
        self.endermanThemeToolStripMenuItem.Size := new System.Drawing.Size(185, 22);
        self.endermanThemeToolStripMenuItem.Text := 'Enderman theme';
        self.endermanThemeToolStripMenuItem.Click += endermanThemeToolStripMenuItem_Click;
        // 
        // aboutToolStripMenuItem
        // 
        self.aboutToolStripMenuItem.ForeColor := System.Drawing.Color.White;
        self.aboutToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('aboutToolStripMenuItem.Image')));
        self.aboutToolStripMenuItem.Name := 'aboutToolStripMenuItem';
        self.aboutToolStripMenuItem.Size := new System.Drawing.Size(68, 20);
        self.aboutToolStripMenuItem.Text := 'About';
        self.aboutToolStripMenuItem.Click += aboutToolStripMenuItem_Click;
        // 
        // statusStrip1
        // 
        self.statusStrip1.BackgroundImage := (System.Drawing.Image(resources.GetObject('statusStrip1.BackgroundImage')));
        self.statusStrip1.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.statusStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[1](self.toolStripStatusLabel1));
        self.statusStrip1.Location := new System.Drawing.Point(0, 379);
        self.statusStrip1.Name := 'statusStrip1';
        self.statusStrip1.Size := new System.Drawing.Size(584, 22);
        self.statusStrip1.TabIndex := 2;
        self.statusStrip1.Text := 'statusStrip1';
        // 
        // toolStripStatusLabel1
        // 
        self.toolStripStatusLabel1.ForeColor := System.Drawing.Color.White;
        self.toolStripStatusLabel1.Name := 'toolStripStatusLabel1';
        self.toolStripStatusLabel1.Size := new System.Drawing.Size(39, 17);
        self.toolStripStatusLabel1.Text := 'Ready';
        // 
        // richTextBox1
        // 
        self.richTextBox1.AcceptsTab := true;
        self.richTextBox1.AutoWordSelection := true;
        self.richTextBox1.BackColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(15)))), (System.Int32((System.Byte(15)))), (System.Int32((System.Byte(15)))));
        self.richTextBox1.ContextMenuStrip := self.contextMenuStrip1;
        self.richTextBox1.Dock := System.Windows.Forms.DockStyle.Fill;
        self.richTextBox1.EnableAutoDragDrop := true;
        self.richTextBox1.Font := new System.Drawing.Font('Courier New', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.richTextBox1.ForeColor := System.Drawing.Color.White;
        self.richTextBox1.Location := new System.Drawing.Point(0, 24);
        self.richTextBox1.Name := 'richTextBox1';
        self.richTextBox1.Size := new System.Drawing.Size(584, 355);
        self.richTextBox1.TabIndex := 0;
        self.richTextBox1.Text := '';
        self.richTextBox1.TextChanged += richTextBox1_TextChanged;
        // 
        // contextMenuStrip1
        // 
        self.contextMenuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[1](self.fontToolStripMenuItem1));
        self.contextMenuStrip1.Name := 'contextMenuStrip1';
        self.contextMenuStrip1.Size := new System.Drawing.Size(99, 26);
        // 
        // fontToolStripMenuItem1
        // 
        self.fontToolStripMenuItem1.Image := (System.Drawing.Image(resources.GetObject('fontToolStripMenuItem1.Image')));
        self.fontToolStripMenuItem1.Name := 'fontToolStripMenuItem1';
        self.fontToolStripMenuItem1.Size := new System.Drawing.Size(98, 22);
        self.fontToolStripMenuItem1.Text := 'Font';
        self.fontToolStripMenuItem1.Click += fontToolStripMenuItem1_Click;
        // 
        // saveFileDialog1
        // 
        self.saveFileDialog1.DefaultExt := 'pas';
        self.saveFileDialog1.FileName := 'Program';
        self.saveFileDialog1.Filter := resources.GetString('saveFileDialog1.Filter');
        self.saveFileDialog1.Title := 'Save code';
        self.saveFileDialog1.FileOk += saveFileDialog1_FileOk;
        // 
        // openFileDialog1
        // 
        self.openFileDialog1.DefaultExt := 'pas';
        self.openFileDialog1.FileName := 'Program';
        self.openFileDialog1.Filter := resources.GetString('openFileDialog1.Filter');
        self.openFileDialog1.Title := 'Open code';
        self.openFileDialog1.FileOk += openFileDialog1_FileOk;
        // 
        // fontDialog1
        // 
        self.fontDialog1.Font := new System.Drawing.Font('Courier New', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        // 
        // printDocument1
        // 
        self.printDocument1.DocumentName := 'Code';
        self.printDocument1.PrintPage += printDocument1_PrintPage;
        // 
        // printPreviewDialog1
        // 
        self.printPreviewDialog1.AutoScrollMargin := new System.Drawing.Size(0, 0);
        self.printPreviewDialog1.AutoScrollMinSize := new System.Drawing.Size(0, 0);
        self.printPreviewDialog1.ClientSize := new System.Drawing.Size(400, 300);
        self.printPreviewDialog1.Document := self.printDocument1;
        self.printPreviewDialog1.Enabled := true;
        self.printPreviewDialog1.Icon := (System.Drawing.Icon(resources.GetObject('printPreviewDialog1.Icon')));
        self.printPreviewDialog1.Name := 'printPreviewDialog1';
        self.printPreviewDialog1.ShowIcon := false;
        self.printPreviewDialog1.UseAntiAlias := true;
        self.printPreviewDialog1.Visible := false;
        // 
        // closeToolStripMenuItem
        // 
        self.closeToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('closeToolStripMenuItem.Image')));
        self.closeToolStripMenuItem.Name := 'closeToolStripMenuItem';
        self.closeToolStripMenuItem.Size := new System.Drawing.Size(189, 22);
        self.closeToolStripMenuItem.Text := 'Close';
        self.closeToolStripMenuItem.Click += closeToolStripMenuItem_Click;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(584, 401);
        self.Controls.Add(self.richTextBox1);
        self.Controls.Add(self.statusStrip1);
        self.Controls.Add(self.menuStrip1);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MainMenuStrip := self.menuStrip1;
        self.MinimumSize := new System.Drawing.Size(225, 112);
        self.Name := 'Form1';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'StandalIDE';
        self.FormClosing += Form1_FormClosing;
        self.FormClosed += Form1_FormClosed;
        self.Load += Form1_Load;
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        self.statusStrip1.ResumeLayout(false);
        self.statusStrip1.PerformLayout();
        self.contextMenuStrip1.ResumeLayout(false);
        self.ResumeLayout(false);
        self.PerformLayout();
    end;