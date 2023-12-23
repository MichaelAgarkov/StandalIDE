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
        self.wordWrapToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.alwaysOnTopToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.fullscreenModeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.closeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.themesToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.lightThemeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.darkThemeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.nightThemeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.programmingThemeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.blueThemeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.endermanThemeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.vaporwaveThemeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.waterThemeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.evilRedThemeToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.aboutToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.statusStrip1 := new System.Windows.Forms.StatusStrip();
        self.toolStripSplitButton1 := new System.Windows.Forms.ToolStripSplitButton();
        self.toolStripStatusLabel1 := new System.Windows.Forms.ToolStripStatusLabel();
        self.contextMenuStrip1 := new System.Windows.Forms.ContextMenuStrip(self.components);
        self.fontToolStripMenuItem1 := new System.Windows.Forms.ToolStripMenuItem();
        self.editorSettingsToolStripMenuItem := new System.Windows.Forms.ToolStripMenuItem();
        self.saveFileDialog1 := new System.Windows.Forms.SaveFileDialog();
        self.openFileDialog1 := new System.Windows.Forms.OpenFileDialog();
        self.fontDialog1 := new System.Windows.Forms.FontDialog();
        self.printDocument1 := new System.Drawing.Printing.PrintDocument();
        self.printPreviewDialog1 := new System.Windows.Forms.PrintPreviewDialog();
        self.textBox1 := new System.Windows.Forms.TextBox();
        self.timer1 := new System.Windows.Forms.Timer(self.components);
        self.panel1 := new System.Windows.Forms.Panel();
        self.tabControl1 := new System.Windows.Forms.TabControl();
        self.tabPage1 := new System.Windows.Forms.TabPage();
        self.consoleControl1 := new ConsoleControl.ConsoleControl();
        self.timer2 := new System.Windows.Forms.Timer(self.components);
        self.menuStrip1.SuspendLayout();
        self.statusStrip1.SuspendLayout();
        self.contextMenuStrip1.SuspendLayout();
        self.panel1.SuspendLayout();
        self.tabControl1.SuspendLayout();
        self.tabPage1.SuspendLayout();
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
        self.fileToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[11](self.openToolStripMenuItem, self.saveToolStripMenuItem, self.printToolStripMenuItem, self.toolStripSeparator1, self.fontToolStripMenuItem, self.toolStripSeparator2, self.settingsToolStripMenuItem, self.wordWrapToolStripMenuItem, self.alwaysOnTopToolStripMenuItem, self.fullscreenModeToolStripMenuItem, self.closeToolStripMenuItem));
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
        self.openToolStripMenuItem.Size := new System.Drawing.Size(197, 22);
        self.openToolStripMenuItem.Text := 'Open';
        self.openToolStripMenuItem.Click += openToolStripMenuItem_Click;
        // 
        // saveToolStripMenuItem
        // 
        self.saveToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('saveToolStripMenuItem.Image')));
        self.saveToolStripMenuItem.Name := 'saveToolStripMenuItem';
        self.saveToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.S)));
        self.saveToolStripMenuItem.Size := new System.Drawing.Size(197, 22);
        self.saveToolStripMenuItem.Text := 'Save';
        self.saveToolStripMenuItem.Click += saveToolStripMenuItem_Click;
        // 
        // printToolStripMenuItem
        // 
        self.printToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('printToolStripMenuItem.Image')));
        self.printToolStripMenuItem.Name := 'printToolStripMenuItem';
        self.printToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.P)));
        self.printToolStripMenuItem.Size := new System.Drawing.Size(197, 22);
        self.printToolStripMenuItem.Text := 'Print (Unstable)';
        self.printToolStripMenuItem.Visible := false;
        self.printToolStripMenuItem.Click += printToolStripMenuItem_Click;
        // 
        // toolStripSeparator1
        // 
        self.toolStripSeparator1.Name := 'toolStripSeparator1';
        self.toolStripSeparator1.Size := new System.Drawing.Size(194, 6);
        // 
        // fontToolStripMenuItem
        // 
        self.fontToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('fontToolStripMenuItem.Image')));
        self.fontToolStripMenuItem.Name := 'fontToolStripMenuItem';
        self.fontToolStripMenuItem.Size := new System.Drawing.Size(197, 22);
        self.fontToolStripMenuItem.Text := 'Font';
        self.fontToolStripMenuItem.Click += fontToolStripMenuItem_Click;
        // 
        // toolStripSeparator2
        // 
        self.toolStripSeparator2.Name := 'toolStripSeparator2';
        self.toolStripSeparator2.Size := new System.Drawing.Size(194, 6);
        // 
        // settingsToolStripMenuItem
        // 
        self.settingsToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('settingsToolStripMenuItem.Image')));
        self.settingsToolStripMenuItem.Name := 'settingsToolStripMenuItem';
        self.settingsToolStripMenuItem.Size := new System.Drawing.Size(197, 22);
        self.settingsToolStripMenuItem.Text := 'Settings';
        self.settingsToolStripMenuItem.Click += settingsToolStripMenuItem_Click;
        // 
        // wordWrapToolStripMenuItem
        // 
        self.wordWrapToolStripMenuItem.CheckOnClick := true;
        self.wordWrapToolStripMenuItem.Name := 'wordWrapToolStripMenuItem';
        self.wordWrapToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.W)));
        self.wordWrapToolStripMenuItem.Size := new System.Drawing.Size(197, 22);
        self.wordWrapToolStripMenuItem.Text := 'Word wrap';
        self.wordWrapToolStripMenuItem.Click += wordWrapToolStripMenuItem_Click;
        // 
        // alwaysOnTopToolStripMenuItem
        // 
        self.alwaysOnTopToolStripMenuItem.CheckOnClick := true;
        self.alwaysOnTopToolStripMenuItem.Name := 'alwaysOnTopToolStripMenuItem';
        self.alwaysOnTopToolStripMenuItem.ShortcutKeys := (System.Windows.Forms.Keys((System.Windows.Forms.Keys.Control or System.Windows.Forms.Keys.T)));
        self.alwaysOnTopToolStripMenuItem.Size := new System.Drawing.Size(197, 22);
        self.alwaysOnTopToolStripMenuItem.Text := 'Always on top';
        self.alwaysOnTopToolStripMenuItem.Click += alwaysOnTopToolStripMenuItem_Click;
        // 
        // fullscreenModeToolStripMenuItem
        // 
        self.fullscreenModeToolStripMenuItem.CheckOnClick := true;
        self.fullscreenModeToolStripMenuItem.Name := 'fullscreenModeToolStripMenuItem';
        self.fullscreenModeToolStripMenuItem.ShortcutKeys := System.Windows.Forms.Keys.F11;
        self.fullscreenModeToolStripMenuItem.Size := new System.Drawing.Size(197, 22);
        self.fullscreenModeToolStripMenuItem.Text := 'Fullscreen Mode';
        self.fullscreenModeToolStripMenuItem.Click += fullscreenModeToolStripMenuItem_Click;
        // 
        // closeToolStripMenuItem
        // 
        self.closeToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('closeToolStripMenuItem.Image')));
        self.closeToolStripMenuItem.Name := 'closeToolStripMenuItem';
        self.closeToolStripMenuItem.Size := new System.Drawing.Size(197, 22);
        self.closeToolStripMenuItem.Text := 'Close';
        self.closeToolStripMenuItem.Click += closeToolStripMenuItem_Click;
        // 
        // themesToolStripMenuItem
        // 
        self.themesToolStripMenuItem.DropDownItems.AddRange(new System.Windows.Forms.ToolStripItem[9](self.lightThemeToolStripMenuItem, self.darkThemeToolStripMenuItem, self.nightThemeToolStripMenuItem, self.programmingThemeToolStripMenuItem, self.blueThemeToolStripMenuItem, self.endermanThemeToolStripMenuItem, self.vaporwaveThemeToolStripMenuItem, self.waterThemeToolStripMenuItem, self.evilRedThemeToolStripMenuItem));
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
        // vaporwaveThemeToolStripMenuItem
        // 
        self.vaporwaveThemeToolStripMenuItem.BackColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(64)))), (System.Int32((System.Byte(0)))), (System.Int32((System.Byte(64)))));
        self.vaporwaveThemeToolStripMenuItem.CheckOnClick := true;
        self.vaporwaveThemeToolStripMenuItem.ForeColor := System.Drawing.Color.Lime;
        self.vaporwaveThemeToolStripMenuItem.Name := 'vaporwaveThemeToolStripMenuItem';
        self.vaporwaveThemeToolStripMenuItem.Size := new System.Drawing.Size(185, 22);
        self.vaporwaveThemeToolStripMenuItem.Text := 'Ralsei theme';
        self.vaporwaveThemeToolStripMenuItem.Click += vaporwaveThemeToolStripMenuItem_Click;
        // 
        // waterThemeToolStripMenuItem
        // 
        self.waterThemeToolStripMenuItem.BackColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(0)))), (System.Int32((System.Byte(32)))), (System.Int32((System.Byte(64)))));
        self.waterThemeToolStripMenuItem.CheckOnClick := true;
        self.waterThemeToolStripMenuItem.ForeColor := System.Drawing.Color.Cyan;
        self.waterThemeToolStripMenuItem.Name := 'waterThemeToolStripMenuItem';
        self.waterThemeToolStripMenuItem.Size := new System.Drawing.Size(185, 22);
        self.waterThemeToolStripMenuItem.Text := 'Vaporeon theme';
        self.waterThemeToolStripMenuItem.Click += waterThemeToolStripMenuItem_Click;
        // 
        // evilRedThemeToolStripMenuItem
        // 
        self.evilRedThemeToolStripMenuItem.BackColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(48)))), (System.Int32((System.Byte(0)))), (System.Int32((System.Byte(0)))));
        self.evilRedThemeToolStripMenuItem.CheckOnClick := true;
        self.evilRedThemeToolStripMenuItem.ForeColor := System.Drawing.Color.Red;
        self.evilRedThemeToolStripMenuItem.Name := 'evilRedThemeToolStripMenuItem';
        self.evilRedThemeToolStripMenuItem.Size := new System.Drawing.Size(185, 22);
        self.evilRedThemeToolStripMenuItem.Text := 'Evil Red theme';
        self.evilRedThemeToolStripMenuItem.Click += evilRedThemeToolStripMenuItem_Click;
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
        self.statusStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[2](self.toolStripSplitButton1, self.toolStripStatusLabel1));
        self.statusStrip1.Location := new System.Drawing.Point(0, 379);
        self.statusStrip1.Name := 'statusStrip1';
        self.statusStrip1.Size := new System.Drawing.Size(584, 22);
        self.statusStrip1.TabIndex := 2;
        self.statusStrip1.Text := 'statusStrip1';
        // 
        // toolStripSplitButton1
        // 
        self.toolStripSplitButton1.DropDownButtonWidth := 0;
        self.toolStripSplitButton1.ForeColor := System.Drawing.Color.White;
        self.toolStripSplitButton1.Image := (System.Drawing.Image(resources.GetObject('toolStripSplitButton1.Image')));
        self.toolStripSplitButton1.ImageTransparentColor := System.Drawing.Color.Magenta;
        self.toolStripSplitButton1.Name := 'toolStripSplitButton1';
        self.toolStripSplitButton1.Size := new System.Drawing.Size(73, 20);
        self.toolStripSplitButton1.Text := 'Terminal';
        self.toolStripSplitButton1.ToolTipText := 'Open the terminal';
        self.toolStripSplitButton1.ButtonClick += toolStripSplitButton1_ButtonClick;
        // 
        // toolStripStatusLabel1
        // 
        self.toolStripStatusLabel1.ForeColor := System.Drawing.Color.White;
        self.toolStripStatusLabel1.Name := 'toolStripStatusLabel1';
        self.toolStripStatusLabel1.Size := new System.Drawing.Size(39, 17);
        self.toolStripStatusLabel1.Text := 'Ready';
        // 
        // contextMenuStrip1
        // 
        self.contextMenuStrip1.Items.AddRange(new System.Windows.Forms.ToolStripItem[2](self.fontToolStripMenuItem1, self.editorSettingsToolStripMenuItem));
        self.contextMenuStrip1.Name := 'contextMenuStrip1';
        self.contextMenuStrip1.Size := new System.Drawing.Size(150, 48);
        self.contextMenuStrip1.Opening += contextMenuStrip1_Opening;
        // 
        // fontToolStripMenuItem1
        // 
        self.fontToolStripMenuItem1.Image := (System.Drawing.Image(resources.GetObject('fontToolStripMenuItem1.Image')));
        self.fontToolStripMenuItem1.Name := 'fontToolStripMenuItem1';
        self.fontToolStripMenuItem1.Size := new System.Drawing.Size(149, 22);
        self.fontToolStripMenuItem1.Text := 'Font';
        self.fontToolStripMenuItem1.Click += fontToolStripMenuItem1_Click;
        // 
        // editorSettingsToolStripMenuItem
        // 
        self.editorSettingsToolStripMenuItem.Image := (System.Drawing.Image(resources.GetObject('editorSettingsToolStripMenuItem.Image')));
        self.editorSettingsToolStripMenuItem.Name := 'editorSettingsToolStripMenuItem';
        self.editorSettingsToolStripMenuItem.Size := new System.Drawing.Size(149, 22);
        self.editorSettingsToolStripMenuItem.Text := 'Editor settings';
        self.editorSettingsToolStripMenuItem.Click += editorSettingsToolStripMenuItem_Click;
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
        // textBox1
        // 
        self.textBox1.AcceptsReturn := true;
        self.textBox1.AcceptsTab := true;
        self.textBox1.BackColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(15)))), (System.Int32((System.Byte(15)))), (System.Int32((System.Byte(15)))));
        self.textBox1.ContextMenuStrip := self.contextMenuStrip1;
        self.textBox1.Dock := System.Windows.Forms.DockStyle.Fill;
        self.textBox1.Font := new System.Drawing.Font('Courier New', 14.25, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.textBox1.ForeColor := System.Drawing.Color.White;
        self.textBox1.Location := new System.Drawing.Point(0, 24);
        self.textBox1.Multiline := true;
        self.textBox1.Name := 'textBox1';
        self.textBox1.ScrollBars := System.Windows.Forms.ScrollBars.Both;
        self.textBox1.Size := new System.Drawing.Size(584, 355);
        self.textBox1.TabIndex := 3;
        self.textBox1.WordWrap := false;
        self.textBox1.TextChanged += textBox1_TextChanged;
        // 
        // timer1
        // 
        self.timer1.Interval := 1;
        self.timer1.Tick += timer1_Tick;
        // 
        // panel1
        // 
        self.panel1.BackColor := System.Drawing.Color.FromArgb((System.Int32((System.Byte(64)))), (System.Int32((System.Byte(64)))), (System.Int32((System.Byte(64)))));
        self.panel1.BorderStyle := System.Windows.Forms.BorderStyle.FixedSingle;
        self.panel1.Controls.Add(self.tabControl1);
        self.panel1.Dock := System.Windows.Forms.DockStyle.Bottom;
        self.panel1.Location := new System.Drawing.Point(0, 219);
        self.panel1.Name := 'panel1';
        self.panel1.Size := new System.Drawing.Size(584, 160);
        self.panel1.TabIndex := 4;
        self.panel1.Visible := false;
        // 
        // tabControl1
        // 
        self.tabControl1.Controls.Add(self.tabPage1);
        self.tabControl1.Dock := System.Windows.Forms.DockStyle.Fill;
        self.tabControl1.Location := new System.Drawing.Point(0, 0);
        self.tabControl1.Name := 'tabControl1';
        self.tabControl1.SelectedIndex := 0;
        self.tabControl1.Size := new System.Drawing.Size(582, 158);
        self.tabControl1.TabIndex := 0;
        // 
        // tabPage1
        // 
        self.tabPage1.Controls.Add(self.consoleControl1);
        self.tabPage1.Location := new System.Drawing.Point(4, 22);
        self.tabPage1.Name := 'tabPage1';
        self.tabPage1.Padding := new System.Windows.Forms.Padding(3);
        self.tabPage1.Size := new System.Drawing.Size(574, 132);
        self.tabPage1.TabIndex := 0;
        self.tabPage1.Text := 'Terminal';
        self.tabPage1.UseVisualStyleBackColor := true;
        // 
        // consoleControl1
        // 
        self.consoleControl1.Dock := System.Windows.Forms.DockStyle.Fill;
        self.consoleControl1.Font := new System.Drawing.Font('Consolas', 12, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.consoleControl1.ImeMode := System.Windows.Forms.ImeMode.NoControl;
        self.consoleControl1.IsInputEnabled := true;
        self.consoleControl1.Location := new System.Drawing.Point(3, 3);
        self.consoleControl1.Margin := new System.Windows.Forms.Padding(4, 4, 4, 4);
        self.consoleControl1.Name := 'consoleControl1';
        self.consoleControl1.SendKeyboardCommandsToProcess := false;
        self.consoleControl1.ShowDiagnostics := true;
        self.consoleControl1.Size := new System.Drawing.Size(568, 126);
        self.consoleControl1.TabIndex := 0;
        self.consoleControl1.Visible := false;
        // 
        // timer2
        // 
        self.timer2.Interval := 3000;
        self.timer2.Tick += timer2_Tick;
        // 
        // Form1
        // 
        self.ClientSize := new System.Drawing.Size(584, 401);
        self.Controls.Add(self.panel1);
        self.Controls.Add(self.textBox1);
        self.Controls.Add(self.statusStrip1);
        self.Controls.Add(self.menuStrip1);
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MainMenuStrip := self.menuStrip1;
        self.MinimumSize := new System.Drawing.Size(225, 112);
        self.Name := 'Form1';
        self.ShowInTaskbar := false;
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'StandalIDE';
        self.WindowState := System.Windows.Forms.FormWindowState.Minimized;
        self.FormClosing += Form1_FormClosing;
        self.FormClosed += Form1_FormClosed;
        self.Load += Form1_Load;
        self.menuStrip1.ResumeLayout(false);
        self.menuStrip1.PerformLayout();
        self.statusStrip1.ResumeLayout(false);
        self.statusStrip1.PerformLayout();
        self.contextMenuStrip1.ResumeLayout(false);
        self.panel1.ResumeLayout(false);
        self.tabControl1.ResumeLayout(false);
        self.tabPage1.ResumeLayout(false);
        self.ResumeLayout(false);
        self.PerformLayout();
    end;
