#pragma once

namespace Tweening {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	
	int state;

			 float a;

	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  imgBtn;
	private: System::Windows::Forms::Button^  tweenBtn;
	private: System::Windows::Forms::Button^  exitBtn;
	private: System::Windows::Forms::PictureBox^  pictureBox;
	private: System::Windows::Forms::Button^  resultBtn;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->imgBtn = (gcnew System::Windows::Forms::Button());
			this->tweenBtn = (gcnew System::Windows::Forms::Button());
			this->exitBtn = (gcnew System::Windows::Forms::Button());
			this->pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->resultBtn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// imgBtn
			// 
			this->imgBtn->Location = System::Drawing::Point(643, 12);
			this->imgBtn->Name = L"imgBtn";
			this->imgBtn->Size = System::Drawing::Size(75, 50);
			this->imgBtn->TabIndex = 0;
			this->imgBtn->Text = L"Image";
			this->imgBtn->UseVisualStyleBackColor = true;
			this->imgBtn->Click += gcnew System::EventHandler(this, &MyForm::imgBtn_Click);
			// 
			// tweenBtn
			// 
			this->tweenBtn->Location = System::Drawing::Point(643, 68);
			this->tweenBtn->Name = L"tweenBtn";
			this->tweenBtn->Size = System::Drawing::Size(75, 50);
			this->tweenBtn->TabIndex = 1;
			this->tweenBtn->Text = L"Tweening";
			this->tweenBtn->UseVisualStyleBackColor = true;
			this->tweenBtn->Click += gcnew System::EventHandler(this, &MyForm::tweenBtn_Click);
			// 
			// exitBtn
			// 
			this->exitBtn->Location = System::Drawing::Point(643, 362);
			this->exitBtn->Name = L"exitBtn";
			this->exitBtn->Size = System::Drawing::Size(75, 50);
			this->exitBtn->TabIndex = 2;
			this->exitBtn->Text = L"Exit";
			this->exitBtn->UseVisualStyleBackColor = true;
			this->exitBtn->Click += gcnew System::EventHandler(this, &MyForm::exitBtn_Click);
			// 
			// pictureBox
			// 
			this->pictureBox->Location = System::Drawing::Point(12, 12);
			this->pictureBox->Name = L"pictureBox";
			this->pictureBox->Size = System::Drawing::Size(600, 400);
			this->pictureBox->TabIndex = 3;
			this->pictureBox->TabStop = false;
			this->pictureBox->BackColorChanged += gcnew System::EventHandler(this, &MyForm::imgBtn_Click);
			this->pictureBox->Click += gcnew System::EventHandler(this, &MyForm::pictureBox_Click);
			// 
			// resultBtn
			// 
			this->resultBtn->Location = System::Drawing::Point(643, 306);
			this->resultBtn->Name = L"resultBtn";
			this->resultBtn->Size = System::Drawing::Size(75, 50);
			this->resultBtn->TabIndex = 6;
			this->resultBtn->Text = L"Result";
			this->resultBtn->UseVisualStyleBackColor = true;
			this->resultBtn->Click += gcnew System::EventHandler(this, &MyForm::resultBtn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(730, 421);
			this->Controls->Add(this->resultBtn);
			this->Controls->Add(this->pictureBox);
			this->Controls->Add(this->exitBtn);
			this->Controls->Add(this->tweenBtn);
			this->Controls->Add(this->imgBtn);
			this->Name = L"MyForm";
			this->Text = L"TweeningApp";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void imgBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		// atur background
		int w = pictureBox->Width;
		int h = pictureBox->Height;

			//state=0;
		pictureBox->Image = gcnew Bitmap(w, h);
		Graphics ^ g = Graphics::FromImage(pictureBox->Image);
		Brush ^ bsh = gcnew SolidBrush(Color::White);
		g->FillRectangle(bsh, 0, 0, w, h);

		// atur warna garisnya *pen
		Pen ^ png = gcnew Pen(Color::Black);

		// taruh gambar disini
			// canvas nya 600 x 400
			// segitiga badan depan
			g->DrawLine(png,  45, 300, 388, 300);
			g->DrawLine(png, 388, 300, 388, 300);
			g->DrawLine(png, 388, 300, 100, 247);
			g->DrawLine(png, 100, 247,  45, 300);

			//segitiga badan belakang
			g->DrawLine(png, 388, 300, 388, 300);
			g->DrawLine(png, 388, 300, 558, 300);
			g->DrawLine(png, 558, 300, 473, 279);
			g->DrawLine(png, 473, 279, 388, 300);

			//mata depan
			g->DrawLine(png,  88, 259,  57, 185);
			g->DrawLine(png,  57, 185,  64, 180);
			g->DrawLine(png,  64, 180, 100, 247);
			g->DrawLine(png, 100, 247,  88, 259);

			//mata belakang
			g->DrawLine(png, 109, 248, 136, 167);
			g->DrawLine(png, 135, 167, 145, 170);
			g->DrawLine(png, 145, 170, 125, 251);
			g->DrawLine(png, 125, 251, 109, 248);

			//cangkang segitiga besar
			g->DrawLine(png, 388, 300, 201, 265);
			g->DrawLine(png, 201, 265, 236, 151);
			g->DrawLine(png, 236, 151, 388, 300);

			//cangkang segitiga sedang depan
			g->DrawLine(png, 413, 204, 413, 204);
			g->DrawLine(png, 413, 204, 308, 100);
			g->DrawLine(png, 308, 100, 415,  95);
			g->DrawLine(png, 415,  95, 413, 204);

			//cangkang segitiga sedang belakang
			g->DrawLine(png, 413, 204, 415,  95);
			g->DrawLine(png, 415,  95, 488, 155);
			g->DrawLine(png, 488, 155, 413, 204);
			g->DrawLine(png, 413, 204, 413, 204);

			//cangkang segitiga kecil
			g->DrawLine(png, 388, 300, 388, 300);
			g->DrawLine(png, 388, 300, 502, 227);
			g->DrawLine(png, 502, 227, 473, 279);
			g->DrawLine(png, 473, 279, 388, 300);

			//cangkang kotak depan
			g->DrawLine(png, 339, 252, 236, 151);
			g->DrawLine(png, 236, 151, 308, 100);
			g->DrawLine(png, 308, 100, 413, 204);
			g->DrawLine(png, 413, 204, 339, 252);

			//cangkang kotak belakang
			g->DrawLine(png, 388, 300, 339, 252);
			g->DrawLine(png, 339, 252, 488, 155);
			g->DrawLine(png, 488, 155, 502, 227);
			g->DrawLine(png, 502, 227, 388, 300);
	}

	private: System::Void tweenBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		// atur background
		int w = pictureBox->Width;
		int h = pictureBox->Height;

		pictureBox->Image = gcnew Bitmap(w, h);
		Graphics ^ g = Graphics::FromImage(pictureBox->Image);
		Brush ^ bsh = gcnew SolidBrush(Color::White);
		g->FillRectangle(bsh, 0, 0, w, h);

		// atur warna garisnya *pen
		Pen ^ png = gcnew Pen(Color::Black);

		// state
		if (state == 0)
		{
			state = 1;
			a = a + 0.1;
			if (a >= 1.1) { a = 0; }
		}
		else
		{
			state = 0;
			a = a + 0.1;
			if (a >= 1.1) { a = 0; }
		}

		//// tweening nya disini
		//body depan --> tembok **
		g->DrawLine(png, a * 258 + (1 - a) * 45, a * 350 + (1 - a) * 300, a * 493 + (1 - a) * 388, a * 350 + (1 - a) * 300);
		g->DrawLine(png, a * 493 + (1 - a) * 388, a * 350 + (1 - a) * 300, a * 493 + (1 - a) * 388, a * 156 + (1 - a) * 300);
		g->DrawLine(png, a * 493 + (1 - a) * 388, a * 156 + (1 - a) * 300, a * 258 + (1 - a) * 100, a * 156 + (1 - a) * 247);
		g->DrawLine(png, a * 258 + (1 - a) * 100, a * 156 + (1 - a) * 247, a * 258 + (1 - a) * 45, a * 350 + (1 - a) * 300);

		//mata depan --> tembok
		g->DrawLine(png, a * 112 + (1 - a) * 88, a * 364 + (1 - a) * 259, a * 112 + (1 - a) * 57, a * 156 + (1 - a) * 185);
		g->DrawLine(png, a * 112 + (1 - a) * 57, a * 156 + (1 - a) * 185, a * 258 + (1 - a) * 64, a * 156 + (1 - a) * 180);
		g->DrawLine(png, a * 258 + (1 - a) * 64, a * 156 + (1 - a) * 180, a * 258 + (1 - a) * 100, a * 364 + (1 - a) * 247);
		g->DrawLine(png, a * 258 + (1 - a) * 100, a * 364 + (1 - a) * 247, a * 112 + (1 - a) * 88, a * 364 + (1 - a) * 259);

		//mata belakang --> jendela
		g->DrawLine(png, a * 140 + (1 - a) * 109, a * 299 + (1 - a) * 248, a * 140 + (1 - a) * 136, a * 205 + (1 - a) * 167);
		g->DrawLine(png, a * 140 + (1 - a) * 135, a * 205 + (1 - a) * 167, a * 233 + (1 - a) * 145, a * 205 + (1 - a) * 170);
		g->DrawLine(png, a * 233 + (1 - a) * 145, a * 205 + (1 - a) * 170, a * 233 + (1 - a) * 125, a * 299 + (1 - a) * 251);
		g->DrawLine(png, a * 233 + (1 - a) * 125, a * 299 + (1 - a) * 251, a * 140 + (1 - a) * 109, a * 299 + (1 - a) * 248);


		//cangkang kotak belakang --> pintu belah kanan
		g->DrawLine(png, a * 393 + (1 - a) * 388, a * 350 + (1 - a) * 300, a * 350 + (1 - a) * 339, a * 350 + (1 - a) * 252);
		g->DrawLine(png, a * 350 + (1 - a) * 339, a * 350 + (1 - a) * 252, a * 350 + (1 - a) * 488, a * 243 + (1 - a) * 155);
		g->DrawLine(png, a * 350 + (1 - a) * 488, a * 243 + (1 - a) * 155, a * 393 + (1 - a) * 502, a * 243 + (1 - a) * 227);
		g->DrawLine(png, a * 393 + (1 - a) * 502, a * 243 + (1 - a) * 227, a * 393 + (1 - a) * 388, a * 350 + (1 - a) * 300);


		//cangkang kotak depan --> pintu belah kiri
		g->DrawLine(png, a * 307 + (1 - a) * 339, a * 350 + (1 - a) * 252, a * 307 + (1 - a) * 236, a * 243 + (1 - a) * 151);
		g->DrawLine(png, a * 307 + (1 - a) * 236, a * 243 + (1 - a) * 151, a * 350 + (1 - a) * 308, a * 243 + (1 - a) * 100);
		g->DrawLine(png, a * 350 + (1 - a) * 308, a * 243 + (1 - a) * 100, a * 350 + (1 - a) * 413, a * 350 + (1 - a) * 204);
		g->DrawLine(png, a * 350 + (1 - a) * 413, a * 350 + (1 - a) * 204, a * 307 + (1 - a) * 339, a * 350 + (1 - a) * 252);

	}

	private: System::Void exitBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		// fungsi exit gan
		this->Close();
	}

	private: System::Void pictureBox_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void resultBtn_Click(System::Object^  sender, System::EventArgs^  e) {
		// atur background	
		int w = pictureBox->Width;
		int h = pictureBox->Height;

		//state=0;
		pictureBox->Image = gcnew Bitmap(w, h);
		Graphics ^ g = Graphics::FromImage(pictureBox->Image);
		Brush ^ bsh = gcnew SolidBrush(Color::White);
		g->FillRectangle(bsh, 0, 0, w, h);

		// atur warna garisnya *pen
		Pen ^ png = gcnew Pen(Color::Black);

		// taruh gambar disini
			// canvas nya 600, 400

		//body rumah kiri
			//mata depan --> tembok
			g->DrawLine(png, 112, 364, 112, 156);
			g->DrawLine(png, 112, 156, 258, 156);
			g->DrawLine(png, 258, 156, 258, 364);
			g->DrawLine(png, 258, 364, 112, 364);

			//mata belakang --> jendela
			g->DrawLine(png, 140, 299, 140, 205);
			g->DrawLine(png, 140, 205, 233, 205);
			g->DrawLine(png, 233, 205, 233, 299);
			g->DrawLine(png, 233, 299, 140, 299);

		//body rumah kanan
			//body depan --> tembok **
			g->DrawLine(png, 258, 350, 493, 350);
			g->DrawLine(png, 493, 350, 493, 156);
			g->DrawLine(png, 493, 156, 258, 156);
			g->DrawLine(png, 258, 156, 258, 350);

			//cangkang kotak depan --> pintu belah kiri
			g->DrawLine(png, 307, 350, 307, 243);
			g->DrawLine(png, 307, 243, 350, 243);
			g->DrawLine(png, 350, 243, 350, 350);
			g->DrawLine(png, 350, 350, 307, 350);

			//cangkang kotak belakang --> pintu belah kanan
			g->DrawLine(png, 393, 350, 350, 350);
			g->DrawLine(png, 350, 350, 350, 243);
			g->DrawLine(png, 350, 243, 393, 243);
			g->DrawLine(png, 393, 243, 393, 350);

			//cangkang segitiga kecil --> jendela **
			g->DrawLine(png, 428, 299, 428, 205);
			g->DrawLine(png, 428, 205, 476, 205);
			g->DrawLine(png, 476, 205, 476, 299);
			g->DrawLine(png, 476, 299, 428, 299);

			//segitiga badan belakang --> tangga **
			g->DrawLine(png, 258, 364, 493, 364);
			g->DrawLine(png, 493, 364, 493, 350);
			g->DrawLine(png, 493, 350, 258, 350);
			g->DrawLine(png, 258, 350, 258, 364);

		//atap rumah
			//cangkang segitiga sedang depan --> jajargenjang **
			g->DrawLine(png, 268, 156, 179,  58);
			g->DrawLine(png, 179,  58, 436,  58);
			g->DrawLine(png, 436,  58, 511, 156);
			g->DrawLine(png, 511, 156, 268, 156);

			//cangkang segitiga besar --> segitiga
			g->DrawLine(png, 268, 156,  90, 156);
			g->DrawLine(png,  90, 156, 179,  58);
			g->DrawLine(png, 179,  58, 268, 156);

			//cangkang segitiga sedang belakang --> corong asap **
			g->DrawLine(png, 381, 58, 381, 29);
			g->DrawLine(png, 381, 29, 418, 29);
			g->DrawLine(png, 418, 29, 418, 58);
			g->DrawLine(png, 418, 58, 381, 58);
	}
};
}
