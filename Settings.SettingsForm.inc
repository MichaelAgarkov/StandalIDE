procedure InitializeComponent;
    begin
        self.components := new System.ComponentModel.Container();
        var resources: System.ComponentModel.ComponentResourceManager := new System.ComponentModel.ComponentResourceManager(typeof(SettingsForm));
        var treeNode11: System.Windows.Forms.TreeNode := new System.Windows.Forms.TreeNode('General');
        var treeNode12: System.Windows.Forms.TreeNode := new System.Windows.Forms.TreeNode('Editor');
        self.panel1 := new System.Windows.Forms.Panel();
        self.treeView1 := new System.Windows.Forms.TreeView();
        self.panel2 := new System.Windows.Forms.Panel();
        self.button1 := new System.Windows.Forms.Button();
        self.button2 := new System.Windows.Forms.Button();
        self.button3 := new System.Windows.Forms.Button();
        self.imageList1 := new System.Windows.Forms.ImageList(self.components);
        self.pictureBox1 := new System.Windows.Forms.PictureBox();
        self.pictureBox2 := new System.Windows.Forms.PictureBox();
        self.panel3 := new System.Windows.Forms.Panel();
        self.panel4 := new System.Windows.Forms.Panel();
        self.label1 := new System.Windows.Forms.Label();
        self.label2 := new System.Windows.Forms.Label();
        self.button4 := new System.Windows.Forms.Button();
        self.button5 := new System.Windows.Forms.Button();
        self.label3 := new System.Windows.Forms.Label();
        self.DefThemeComboBox := new System.Windows.Forms.ComboBox();
        self.checkBox1 := new System.Windows.Forms.CheckBox();
        self.checkBox2 := new System.Windows.Forms.CheckBox();
        self.panel1.SuspendLayout();
        self.panel2.SuspendLayout();
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).BeginInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).BeginInit();
        self.panel3.SuspendLayout();
        self.panel4.SuspendLayout();
        self.SuspendLayout();
        // 
        // panel1
        // 
        self.panel1.BackgroundImage := (System.Drawing.Image(resources.GetObject('panel1.BackgroundImage')));
        self.panel1.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.panel1.Controls.Add(self.label2);
        self.panel1.Controls.Add(self.label1);
        self.panel1.Controls.Add(self.pictureBox2);
        self.panel1.Controls.Add(self.pictureBox1);
        self.panel1.Dock := System.Windows.Forms.DockStyle.Top;
        self.panel1.Location := new System.Drawing.Point(0, 0);
        self.panel1.Name := 'panel1';
        self.panel1.Size := new System.Drawing.Size(404, 65);
        self.panel1.TabIndex := 0;
        // 
        // treeView1
        // 
        self.treeView1.Dock := System.Windows.Forms.DockStyle.Left;
        self.treeView1.ImageIndex := 0;
        self.treeView1.ImageList := self.imageList1;
        self.treeView1.Location := new System.Drawing.Point(0, 65);
        self.treeView1.Name := 'treeView1';
        treeNode11.ImageKey := 'General';
        treeNode11.Name := 'Узел0';
        treeNode11.SelectedImageKey := 'General';
        treeNode11.Text := 'General';
        treeNode12.ImageKey := 'Editor';
        treeNode12.Name := 'Узел1';
        treeNode12.SelectedImageKey := 'Editor';
        treeNode12.Text := 'Editor';
        self.treeView1.Nodes.AddRange(new System.Windows.Forms.TreeNode[2](treeNode11, treeNode12));
        self.treeView1.SelectedImageIndex := 0;
        self.treeView1.Size := new System.Drawing.Size(121, 246);
        self.treeView1.TabIndex := 1;
        self.treeView1.AfterSelect += treeView1_AfterSelect;
        // 
        // panel2
        // 
        self.panel2.BackgroundImage := (System.Drawing.Image(resources.GetObject('panel2.BackgroundImage')));
        self.panel2.BackgroundImageLayout := System.Windows.Forms.ImageLayout.Stretch;
        self.panel2.Controls.Add(self.button3);
        self.panel2.Controls.Add(self.button2);
        self.panel2.Controls.Add(self.button1);
        self.panel2.Dock := System.Windows.Forms.DockStyle.Bottom;
        self.panel2.Location := new System.Drawing.Point(121, 282);
        self.panel2.Name := 'panel2';
        self.panel2.Size := new System.Drawing.Size(283, 29);
        self.panel2.TabIndex := 2;
        // 
        // button1
        // 
        self.button1.Location := new System.Drawing.Point(205, 3);
        self.button1.Name := 'button1';
        self.button1.Size := new System.Drawing.Size(75, 23);
        self.button1.TabIndex := 0;
        self.button1.Text := 'OK';
        self.button1.UseVisualStyleBackColor := true;
        self.button1.Click += button1_Click;
        // 
        // button2
        // 
        self.button2.Location := new System.Drawing.Point(124, 3);
        self.button2.Name := 'button2';
        self.button2.Size := new System.Drawing.Size(75, 23);
        self.button2.TabIndex := 1;
        self.button2.Text := 'Apply';
        self.button2.UseVisualStyleBackColor := true;
        self.button2.Click += button2_Click;
        // 
        // button3
        // 
        self.button3.Location := new System.Drawing.Point(6, 3);
        self.button3.Name := 'button3';
        self.button3.Size := new System.Drawing.Size(75, 23);
        self.button3.TabIndex := 2;
        self.button3.Text := 'Cancel';
        self.button3.UseVisualStyleBackColor := true;
        self.button3.Click += button3_Click;
        // 
        // imageList1
        // 
        self.imageList1.ImageStream := (System.Windows.Forms.ImageListStreamer(resources.GetObject('imageList1.ImageStream')));
        self.imageList1.TransparentColor := System.Drawing.Color.Transparent;
        self.imageList1.Images.SetKeyName(0, 'General');
        self.imageList1.Images.SetKeyName(1, 'Editor');
        // 
        // pictureBox1
        // 
        self.pictureBox1.BackColor := System.Drawing.Color.Transparent;
        self.pictureBox1.Image := (System.Drawing.Image(resources.GetObject('pictureBox1.Image')));
        self.pictureBox1.Location := new System.Drawing.Point(3, 3);
        self.pictureBox1.Name := 'pictureBox1';
        self.pictureBox1.Size := new System.Drawing.Size(59, 59);
        self.pictureBox1.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox1.TabIndex := 3;
        self.pictureBox1.TabStop := false;
        // 
        // pictureBox2
        // 
        self.pictureBox2.BackColor := System.Drawing.Color.Transparent;
        self.pictureBox2.Image := (System.Drawing.Image(resources.GetObject('pictureBox2.Image')));
        self.pictureBox2.Location := new System.Drawing.Point(3, 3);
        self.pictureBox2.Name := 'pictureBox2';
        self.pictureBox2.Size := new System.Drawing.Size(59, 59);
        self.pictureBox2.SizeMode := System.Windows.Forms.PictureBoxSizeMode.StretchImage;
        self.pictureBox2.TabIndex := 4;
        self.pictureBox2.TabStop := false;
        self.pictureBox2.Visible := false;
        // 
        // panel3
        // 
        self.panel3.Controls.Add(self.checkBox2);
        self.panel3.Controls.Add(self.checkBox1);
        self.panel3.Controls.Add(self.button4);
        self.panel3.Dock := System.Windows.Forms.DockStyle.Fill;
        self.panel3.Location := new System.Drawing.Point(121, 65);
        self.panel3.Name := 'panel3';
        self.panel3.Size := new System.Drawing.Size(283, 217);
        self.panel3.TabIndex := 3;
        // 
        // panel4
        // 
        self.panel4.Controls.Add(self.label3);
        self.panel4.Controls.Add(self.DefThemeComboBox);
        self.panel4.Controls.Add(self.button5);
        self.panel4.Dock := System.Windows.Forms.DockStyle.Fill;
        self.panel4.Location := new System.Drawing.Point(121, 65);
        self.panel4.Name := 'panel4';
        self.panel4.Size := new System.Drawing.Size(283, 217);
        self.panel4.TabIndex := 4;
        self.panel4.Visible := false;
        // 
        // label1
        // 
        self.label1.BackColor := System.Drawing.Color.Transparent;
        self.label1.Font := new System.Drawing.Font('Segoe UI', 9.75, System.Drawing.FontStyle.Regular, System.Drawing.GraphicsUnit.Point, (System.Byte(204)));
        self.label1.ForeColor := System.Drawing.Color.White;
        self.label1.Location := new System.Drawing.Point(121, 9);
        self.label1.Name := 'label1';
        self.label1.Size := new System.Drawing.Size(271, 23);
        self.label1.TabIndex := 5;
        self.label1.Text := 'General';
        // 
        // label2
        // 
        self.label2.BackColor := System.Drawing.Color.Transparent;
        self.label2.ForeColor := System.Drawing.Color.White;
        self.label2.Location := new System.Drawing.Point(143, 32);
        self.label2.Name := 'label2';
        self.label2.Size := new System.Drawing.Size(249, 16);
        self.label2.TabIndex := 6;
        self.label2.Text := 'The general settings for the program';
        // 
        // button4
        // 
        self.button4.Location := new System.Drawing.Point(205, 191);
        self.button4.Name := 'button4';
        self.button4.Size := new System.Drawing.Size(75, 23);
        self.button4.TabIndex := 0;
        self.button4.Text := 'Set default';
        self.button4.UseVisualStyleBackColor := true;
        self.button4.Click += button4_Click;
        // 
        // button5
        // 
        self.button5.Location := new System.Drawing.Point(205, 191);
        self.button5.Name := 'button5';
        self.button5.Size := new System.Drawing.Size(75, 23);
        self.button5.TabIndex := 0;
        self.button5.Text := 'Set default';
        self.button5.UseVisualStyleBackColor := true;
        self.button5.Click += button5_Click;
        // 
        // label3
        // 
        self.label3.Location := new System.Drawing.Point(3, 4);
        self.label3.Name := 'label3';
        self.label3.Size := new System.Drawing.Size(79, 23);
        self.label3.TabIndex := 2;
        self.label3.Text := 'Default theme:';
        self.label3.TextAlign := System.Drawing.ContentAlignment.MiddleRight;
        // 
        // DefThemeComboBox
        // 
        self.DefThemeComboBox.DropDownStyle := System.Windows.Forms.ComboBoxStyle.DropDownList;
        self.DefThemeComboBox.FormattingEnabled := true;
        self.DefThemeComboBox.Items.AddRange(new System.Object[6]('Light theme', 'Dark theme', 'Night theme', 'Programming theme', 'Blue theme', 'Enderman theme'));
        self.DefThemeComboBox.Location := new System.Drawing.Point(88, 6);
        self.DefThemeComboBox.Name := 'DefThemeComboBox';
        self.DefThemeComboBox.Size := new System.Drawing.Size(183, 21);
        self.DefThemeComboBox.TabIndex := 3;
        // 
        // checkBox1
        // 
        self.checkBox1.Location := new System.Drawing.Point(6, 6);
        self.checkBox1.Name := 'checkBox1';
        self.checkBox1.Size := new System.Drawing.Size(265, 24);
        self.checkBox1.TabIndex := 1;
        self.checkBox1.Text := 'Always on top at start';
        self.checkBox1.UseVisualStyleBackColor := true;
        // 
        // checkBox2
        // 
        self.checkBox2.Location := new System.Drawing.Point(6, 36);
        self.checkBox2.Name := 'checkBox2';
        self.checkBox2.Size := new System.Drawing.Size(265, 24);
        self.checkBox2.TabIndex := 2;
        self.checkBox2.Text := 'Fullscreen at start';
        self.checkBox2.UseVisualStyleBackColor := true;
        // 
        // SettingsForm
        // 
        self.ClientSize := new System.Drawing.Size(404, 311);
        self.Controls.Add(self.panel4);
        self.Controls.Add(self.panel3);
        self.Controls.Add(self.panel2);
        self.Controls.Add(self.treeView1);
        self.Controls.Add(self.panel1);
        self.FormBorderStyle := System.Windows.Forms.FormBorderStyle.FixedSingle;
        self.Icon := (System.Drawing.Icon(resources.GetObject('$this.Icon')));
        self.MaximizeBox := false;
        self.Name := 'SettingsForm';
        self.StartPosition := System.Windows.Forms.FormStartPosition.CenterScreen;
        self.Text := 'StandalIDE Settings';
        self.Load += SettingsForm_Load;
        self.panel1.ResumeLayout(false);
        self.panel2.ResumeLayout(false);
        (System.ComponentModel.ISupportInitialize(self.pictureBox1)).EndInit();
        (System.ComponentModel.ISupportInitialize(self.pictureBox2)).EndInit();
        self.panel3.ResumeLayout(false);
        self.panel4.ResumeLayout(false);
        self.ResumeLayout(false);
    end;
