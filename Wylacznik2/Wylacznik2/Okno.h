#pragma once
#using <System.dll>



namespace Wylacznik2 {

	
	using namespace System::Diagnostics;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Okno
	/// </summary>
	public ref class Okno : public System::Windows::Forms::Form
	{
	public:
		Okno(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
			button7->Enabled = false;
			label3->Text = "0:00";
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Okno()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>

		int status = 1;
		char zadanie = 'x';
		double godziny=0;

			 double minuty = 0;
	private: System::Windows::Forms::Button^  button7;

			 double sekundy = 0;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Wymagana metoda wsparcia projektanta - nie nale¿y modyfikowaæ
		/// zawartoœæ tej metody z edytorem kodu.
		/// </summary>
			 void OpenApplication(String^ myFavoritesPath)
			 {
				 // Start Internet Explorer. Defaults to the home page.
				 Process::Start("cmd.exe");

				 // Display the contents of the favorites folder in the browser.
				 //Process::Start(myFavoritesPath);
			 }

		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(110, 29);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Za ile chcia³byœ wy³¹czyæ komputer\?";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(41, 67);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"15 minut";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Okno::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(122, 67);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"30 minut";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Okno::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(203, 67);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"45 minut";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Okno::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(284, 67);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"1 godzina";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Okno::button4_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(142, 122);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Komputer wy³¹czy siê za:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(190, 148);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"0";
			// 
			// timer1
			// 
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Okno::timer1_Tick);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(82, 187);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 7;
			this->button5->Text = L"START";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Okno::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(244, 187);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 8;
			this->button6->Text = L"RESET";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Okno::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(163, 187);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 9;
			this->button7->Text = L"STOP";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Okno::button7_Click);
			// 
			// Okno
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(393, 238);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Okno";
			this->Text = L"Wy³¹cznik komputera";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				
				 if ((minuty == 0) && (sekundy == 0))
				 {
					 button7->Enabled = false;
					 MessageBox::Show("Wybierz po ilu minutach komputer ma siê wy³¹czyæ !", "UWAGA!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 }

				 else
				 {
					 button7->Enabled = true;
					 if (status == 1)
					 {
						 timer1->Start();

						 button5->Enabled = false;
						 minuty = Convert::ToDouble(label3->Text);
					 }
					 else
					 {
						 timer1->Start();
						 button5->Text = "START";
						 button5->Enabled = false;
					 }
				 }

				 
				 
				 
	}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 minuty = 15;
			 label3->Text = "15";
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 minuty = 30;
			 label3->Text = "30";
			 
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 minuty = 45;
			 label3->Text = "45";
}
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 minuty = 60;
			 label3->Text = "60";
}
private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {

			 if ((minuty == 0)&&(sekundy==0))
			 {
				 timer1->Stop();
				 WylaczKomputer('k');
				 //MessageBox::Show("Komputer zostanie wy³¹czony za 1 minutê. Zapisz wszystkie wa¿ne dane.", "UWAGA!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				 label3->Visible = false;
			 }
			 if (sekundy ==0)
			 { 
				 sekundy = 59;
				 minuty--;
			 }
			 if (sekundy <= 9)
			 {
				 label3->Text = Convert::ToString(minuty) + " :0" + Convert::ToString(sekundy);
			 }
			 else
			 {
				 label3->Text = Convert::ToString(minuty) + " : " + Convert::ToString(sekundy);
			 }
			 sekundy--;

			
			 

}

		 private: static void WylaczKomputer(char zadanie)
		 {
					  if (zadanie == 'a')
					  {
						  Process::Start("shutdown", String::Format("/a"));
					  }
					  else
					  {
						  Process::Start("shutdown", String::Format("/s /t 60"));
						 
					  }
	  
		 }
				   
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Stop();
			 minuty = 0;
			 sekundy = 0;
			 label3->Visible = true;
			 button5->Enabled = true;
			 button7->Enabled = false;
			 button5->Text = "START";
			 label3->Text = "0:00";
			 status = 1;
			 WylaczKomputer('a');  // komenda konsoli zeby nie wylaczal kompa
			 ///zmieniam tu do testow 
			 
			 
}
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 timer1->Stop();
			 button5->Enabled = true;
			 button5->Text = "WZNÓW";
			 status = 0;
}
};
}
