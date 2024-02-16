#pragma once

namespace todolist {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ToDoForm
	/// </summary>
	public ref class ToDoForm : public System::Windows::Forms::Form
	{
	public:
		ToDoForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ToDoForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ TaskTb;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ AddBtn;
	private: System::Windows::Forms::ListBox^ TasksList;
	private: System::Windows::Forms::CheckedListBox^ checkedList;





	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->TaskTb = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->AddBtn = (gcnew System::Windows::Forms::Button());
			this->TasksList = (gcnew System::Windows::Forms::ListBox());
			this->checkedList = (gcnew System::Windows::Forms::CheckedListBox());
			this->SuspendLayout();
			// 
			// TaskTb
			// 
			this->TaskTb->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Left | System::Windows::Forms::AnchorStyles::Right));
			this->TaskTb->Location = System::Drawing::Point(28, 83);
			this->TaskTb->Multiline = true;
			this->TaskTb->Name = L"TaskTb";
			this->TaskTb->Size = System::Drawing::Size(197, 40);
			this->TaskTb->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Palatino Linotype", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(25, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(100, 27);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Add Task";
			// 
			// AddBtn
			// 
			this->AddBtn->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->AddBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->AddBtn->ForeColor = System::Drawing::Color::DimGray;
			this->AddBtn->Location = System::Drawing::Point(243, 83);
			this->AddBtn->Name = L"AddBtn";
			this->AddBtn->Size = System::Drawing::Size(108, 40);
			this->AddBtn->TabIndex = 2;
			this->AddBtn->Text = L"ADD";
			this->AddBtn->UseVisualStyleBackColor = false;
			this->AddBtn->Click += gcnew System::EventHandler(this, &ToDoForm::button1_Click);
			// 
			// TasksList
			// 
			this->TasksList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TasksList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->TasksList->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TasksList->Font = (gcnew System::Drawing::Font(L"Microsoft Uighur", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TasksList->ForeColor = System::Drawing::SystemColors::Window;
			this->TasksList->FormattingEnabled = true;
			this->TasksList->ItemHeight = 34;
			this->TasksList->Location = System::Drawing::Point(28, 139);
			this->TasksList->Name = L"TasksList";
			this->TasksList->Size = System::Drawing::Size(316, 104);
			this->TasksList->TabIndex = 3;
			this->TasksList->UseWaitCursor = true;
			this->TasksList->SelectedIndexChanged += gcnew System::EventHandler(this, &ToDoForm::TasksList_SelectedIndexChanged);
			// 
			// checkedList
			// 
			this->checkedList->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->checkedList->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->checkedList->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->checkedList->Cursor = System::Windows::Forms::Cursors::PanNW;
			this->checkedList->Font = (gcnew System::Drawing::Font(L"Microsoft Himalaya", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedList->ForeColor = System::Drawing::SystemColors::Window;
			this->checkedList->FormattingEnabled = true;
			this->checkedList->Location = System::Drawing::Point(26, 250);
			this->checkedList->Name = L"checkedList";
			this->checkedList->Size = System::Drawing::Size(318, 112);
			this->checkedList->TabIndex = 5;
			this->checkedList->ThreeDCheckBoxes = true;
			this->checkedList->SelectedIndexChanged += gcnew System::EventHandler(this, &ToDoForm::checkedListBox1_SelectedIndexChanged);
			// 
			// ToDoForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->ClientSize = System::Drawing::Size(381, 374);
			this->Controls->Add(this->checkedList);
			this->Controls->Add(this->TasksList);
			this->Controls->Add(this->AddBtn);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->TaskTb);
			this->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->MinimumSize = System::Drawing::Size(396, 402);
			this->Name = L"ToDoForm";
			this->Text = L"ToDoForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ taskText = this->TaskTb->Text;
		TasksList->Items->Add(taskText);
		this->TaskTb->Text = "";
	}
	
	private: System::Void TasksList_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (TasksList->SelectedIndex != -1) {
			checkedList->Items->Add(TasksList->Text);
			TasksList->Items->RemoveAt(TasksList->SelectedIndex);
		}
	}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
