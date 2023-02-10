#pragma once
#include <random>
#include <string>
#include <msclr\marshal_cppstd.h>
void MarshalString(System::String^ stm0, std::string& stm1)
{
	stm1 = msclr::interop::marshal_as<std::string>(stm0);
}
namespace Senhas {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Sumário para mainform
	/// </summary>
	public ref class mainform : public System::Windows::Forms::Form
	{
	public:
		mainform(void)
		{
			InitializeComponent();
			//
			//TODO: Adicione o código do construtor aqui
			//
		}

	protected:
		/// <summary>
		/// Limpar os recursos que estão sendo usados.
		/// </summary>
		~mainform()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ senhaInserida;




	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;


	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ generator;
	private: System::Windows::Forms::TextBox^ chooseSenha;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ criptografo;

	private: System::Windows::Forms::Button^ cript_soma;
	private: System::Windows::Forms::Button^ cript_inv;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Button^ crip_parsum;
	private: System::Windows::Forms::Button^ crip_espelho;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;






	protected:

	private:
		/// <summary>
		/// Variável de designer necessária.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necessário para suporte ao Designer - não modifique 
		/// o conteúdo deste método com o editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(mainform::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->senhaInserida = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->generator = (gcnew System::Windows::Forms::Button());
			this->chooseSenha = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->criptografo = (gcnew System::Windows::Forms::TextBox());
			this->cript_soma = (gcnew System::Windows::Forms::Button());
			this->cript_inv = (gcnew System::Windows::Forms::Button());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->crip_parsum = (gcnew System::Windows::Forms::Button());
			this->crip_espelho = (gcnew System::Windows::Forms::Button());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(63, 33);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(175, 21);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Formatação de Senha";
			this->label2->Click += gcnew System::EventHandler(this, &mainform::label2_Click);
			// 
			// senhaInserida
			// 
			this->senhaInserida->Location = System::Drawing::Point(24, 68);
			this->senhaInserida->Name = L"senhaInserida";
			this->senhaInserida->Size = System::Drawing::Size(258, 20);
			this->senhaInserida->TabIndex = 2;
			this->senhaInserida->TextChanged += gcnew System::EventHandler(this, &mainform::senhaInserida_TextChanged);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->Location = System::Drawing::Point(24, 98);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(143, 19);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Letras Maiúsculas";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &mainform::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox2->Location = System::Drawing::Point(24, 144);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(143, 19);
			this->checkBox2->TabIndex = 7;
			this->checkBox2->Text = L"Letras Minúsculas";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &mainform::checkBox2_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox3->Location = System::Drawing::Point(185, 97);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(97, 19);
			this->checkBox3->TabIndex = 8;
			this->checkBox3->Text = L"Algarismos";
			this->checkBox3->UseVisualStyleBackColor = true;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &mainform::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox4->Location = System::Drawing::Point(185, 144);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(88, 19);
			this->checkBox4->TabIndex = 9;
			this->checkBox4->Text = L"Especiais";
			this->checkBox4->UseVisualStyleBackColor = true;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &mainform::checkBox4_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(317, 97);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(184, 15);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Tamanho Mínimo da Senha";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(317, 148);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(187, 15);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Tamanho Máximo da Senha";
			this->label4->Click += gcnew System::EventHandler(this, &mainform::label4_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(317, 116);
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 20);
			this->numericUpDown1->TabIndex = 12;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &mainform::numericUpDown1_ValueChanged);
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(317, 166);
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(120, 20);
			this->numericUpDown2->TabIndex = 13;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown2->ValueChanged += gcnew System::EventHandler(this, &mainform::numericUpDown2_ValueChanged_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(30, 191);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(243, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Formatar";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &mainform::button2_Click);
			// 
			// generator
			// 
			this->generator->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->generator->Location = System::Drawing::Point(357, 192);
			this->generator->Name = L"generator";
			this->generator->Size = System::Drawing::Size(181, 23);
			this->generator->TabIndex = 16;
			this->generator->Text = L"Gerar Nova Senha";
			this->generator->UseVisualStyleBackColor = true;
			this->generator->Click += gcnew System::EventHandler(this, &mainform::button3_Click);
			// 
			// chooseSenha
			// 
			this->chooseSenha->Location = System::Drawing::Point(317, 68);
			this->chooseSenha->Name = L"chooseSenha";
			this->chooseSenha->Size = System::Drawing::Size(259, 20);
			this->chooseSenha->TabIndex = 17;
			this->chooseSenha->TextChanged += gcnew System::EventHandler(this, &mainform::chooseSenha_TextChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(337, 33);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(219, 21);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Geração de Senha Aleatória";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 11, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(24, 250);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(154, 21);
			this->label1->TabIndex = 19;
			this->label1->Text = L"Criptografar Senha";
			// 
			// criptografo
			// 
			this->criptografo->Location = System::Drawing::Point(24, 289);
			this->criptografo->Name = L"criptografo";
			this->criptografo->Size = System::Drawing::Size(154, 20);
			this->criptografo->TabIndex = 20;
			this->criptografo->TextChanged += gcnew System::EventHandler(this, &mainform::criptografo_TextChanged);
			// 
			// cript_soma
			// 
			this->cript_soma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cript_soma->Location = System::Drawing::Point(212, 249);
			this->cript_soma->Name = L"cript_soma";
			this->cript_soma->Size = System::Drawing::Size(83, 23);
			this->cript_soma->TabIndex = 21;
			this->cript_soma->Text = L"Soma";
			this->cript_soma->UseVisualStyleBackColor = true;
			this->cript_soma->Click += gcnew System::EventHandler(this, &mainform::cript_soma_Click);
			// 
			// cript_inv
			// 
			this->cript_inv->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->cript_inv->Location = System::Drawing::Point(427, 248);
			this->cript_inv->Name = L"cript_inv";
			this->cript_inv->Size = System::Drawing::Size(126, 23);
			this->cript_inv->TabIndex = 22;
			this->cript_inv->Text = L"Espelhamento";
			this->cript_inv->UseVisualStyleBackColor = true;
			this->cript_inv->Click += gcnew System::EventHandler(this, &mainform::cript_inv_Click);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(215, 278);
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(36, 20);
			this->numericUpDown3->TabIndex = 24;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &mainform::numericUpDown3_ValueChanged);
			// 
			// crip_parsum
			// 
			this->crip_parsum->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->crip_parsum->Location = System::Drawing::Point(301, 248);
			this->crip_parsum->Name = L"crip_parsum";
			this->crip_parsum->Size = System::Drawing::Size(120, 23);
			this->crip_parsum->TabIndex = 25;
			this->crip_parsum->Text = L"Soma Parcial";
			this->crip_parsum->UseVisualStyleBackColor = true;
			this->crip_parsum->Click += gcnew System::EventHandler(this, &mainform::crip_parsum_Click);
			// 
			// crip_espelho
			// 
			this->crip_espelho->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->crip_espelho->Location = System::Drawing::Point(427, 289);
			this->crip_espelho->Name = L"crip_espelho";
			this->crip_espelho->Size = System::Drawing::Size(126, 23);
			this->crip_espelho->TabIndex = 26;
			this->crip_espelho->Text = L"Inversão";
			this->crip_espelho->UseVisualStyleBackColor = true;
			this->crip_espelho->Click += gcnew System::EventHandler(this, &mainform::crip_espelho_Click);
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->Location = System::Drawing::Point(301, 277);
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(36, 20);
			this->numericUpDown4->TabIndex = 27;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &mainform::numericUpDown4_ValueChanged);
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->Location = System::Drawing::Point(343, 277);
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(47, 20);
			this->numericUpDown5->TabIndex = 28;
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &mainform::numericUpDown5_ValueChanged);
			// 
			// mainform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(600, 339);
			this->Controls->Add(this->numericUpDown5);
			this->Controls->Add(this->numericUpDown4);
			this->Controls->Add(this->crip_espelho);
			this->Controls->Add(this->crip_parsum);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->cript_inv);
			this->Controls->Add(this->cript_soma);
			this->Controls->Add(this->criptografo);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->chooseSenha);
			this->Controls->Add(this->generator);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->senhaInserida);
			this->MaximumSize = System::Drawing::Size(616, 378);
			this->MinimumSize = System::Drawing::Size(616, 378);
			this->Name = L"mainform";
			this->Text = L"Senhas++";
			this->Load += gcnew System::EventHandler(this, &mainform::mainform_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void mainform_Load(System::Object^ sender, System::EventArgs^ e) {
		this->checkBox1->Checked = 1;
		this->checkBox2->Checked = 1;
		this->checkBox3->Checked = 1;
		this->checkBox4->Checked = 1;
		this->numericUpDown1->Value = 1;
		this->numericUpDown2->Value = 15;
		this->numericUpDown3->Value = 1;
		this->numericUpDown4->Value = 1;
		this->numericUpDown5->Value = 2;
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string mymodifs;
		MarshalString(this->senhaInserida->Text, mymodifs);
		for (int inn = 0; inn < mymodifs.length(); inn++) {
			if (this->checkBox1->Checked == 0 && (mymodifs[inn] <= 90 && mymodifs[inn] >= 65)) {
				mymodifs.erase(inn, 1);
				inn--;
			}
			else if (this->checkBox2->Checked == 0 && (mymodifs[inn] <= 122 && mymodifs[inn] >= 97)) {
				mymodifs.erase(inn, 1);
				inn--;
			}
			else if (this->checkBox3->Checked == 0 && (mymodifs[inn] <= 57 && mymodifs[inn] >= 48)) {
				mymodifs.erase(inn, 1);
				inn--;
			}
			else if (this->checkBox4->Checked == 0 && !(mymodifs[inn] <= 57 && mymodifs[inn] >= 48) && !(mymodifs[inn] <= 122 && mymodifs[inn] >= 97) && !(mymodifs[inn] <= 90 && mymodifs[inn] >= 65)) {
				mymodifs.erase(inn, 1);
				inn--;
			}
		}
		this->senhaInserida->Text = gcnew System::String(mymodifs.c_str());
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->numericUpDown1->Value > this->numericUpDown2->Value) {
			this->numericUpDown2->Value = this->numericUpDown1->Value;
		}
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		//Gerar Nova Senhas
		int l1 = (int)this->numericUpDown1->Value, l2 = (int)this->numericUpDown2->Value;
		int xs1[4] = { 97,65,1,48 }, xs2[4] = { 122,90,5,57 };
		char convchar[5] = { '!','(',')','_','-' };
		int chs1 = 0;
		std::random_device rdev;
		std::mt19937 rng(rdev());
		std::uniform_int_distribution<std::mt19937::result_type> distr(l1, l2);
		std::uniform_int_distribution<std::mt19937::result_type> get1from4(1, 4);
		std::uniform_int_distribution<std::mt19937::result_type> random_min_char(97, 122);
		std::uniform_int_distribution<std::mt19937::result_type> random_mai_char(65, 90);
		std::uniform_int_distribution<std::mt19937::result_type> random_spe_char(1, 5);
		std::uniform_int_distribution<std::mt19937::result_type> random_dig_char(48, 57);

		int selectedSize = distr(rng);
		this->chooseSenha->Text = "";
		char cy[101] = "";
		for (int i = 0; i < selectedSize; i++) {
			chs1 = get1from4(rng) - 1;
			std::uniform_int_distribution<std::mt19937::result_type> random_type_char(xs1[chs1], xs2[chs1]);
			cy[i] = (char)random_type_char(rng);
			if (cy[i] < 6) {
				cy[i] = convchar[cy[i] - 1];
			}
		}
		char* cx = cy;
		String^ cz = gcnew String(cx);
		this->chooseSenha->Text = this->chooseSenha->Text->Insert(0, cz);
	}
	private: System::Void senhaGerada_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void chooseSenha_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void numericUpDown2_ValueChanged_1(System::Object^ sender, System::EventArgs^ e) {
		if (this->numericUpDown2->Value < this->numericUpDown1->Value) {
			this->numericUpDown1->Value = this->numericUpDown2->Value;
		}
	}
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void senhaInserida_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void numericUpDown3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (numericUpDown3->Value < 1) {
			numericUpDown3->Value = 1;
		} else if (numericUpDown3->Value > 25) {
			numericUpDown3->Value = 25;
		}
	}
	private: System::Void numericUpDown4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (numericUpDown4->Value < 1) {
			numericUpDown4->Value = 1;
		}
		else if (numericUpDown4->Value > 25) {
			numericUpDown4->Value = 25;
		}
	}
	private: System::Void criptografo_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void crip_espelho_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string criptosenha;
		MarshalString(this->criptografo->Text, criptosenha);
		for (int icont = 0; icont < criptosenha.length(); icont++) {
			if (criptosenha[icont] <= 90 && criptosenha[icont] >= 65) {
				criptosenha[icont] = 65 + (90 - criptosenha[icont]);
			} else if (criptosenha[icont] >= 97 && criptosenha[icont] <= 122){
				criptosenha[icont] = 97 + (122 - criptosenha[icont]);
			} else if (criptosenha[icont] <= 57 && criptosenha[icont] >= 48){
				criptosenha[icont] = 48 + (57 - criptosenha[icont]);
			}
		}
		this->criptografo->Text = gcnew System::String(criptosenha.c_str());
	}
	private: System::Void cript_inv_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string criptos;
		MarshalString(this->criptografo->Text, criptos);
		for (int cit = 0; cit < criptos.length()/2; cit++) {
			char tempchar0 = criptos[cit];
			criptos[cit] = criptos[criptos.length() - cit - 1];
			criptos[criptos.length() - cit - 1] = tempchar0;
		}
		this->criptografo->Text = gcnew System::String(criptos.c_str());
	}
	private: System::Void cript_soma_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string criptosenha0;
		MarshalString(this->criptografo->Text, criptosenha0);
		for (int icsz = 0; icsz < criptosenha0.length(); icsz++){
			if (criptosenha0[icsz] <= 90 && criptosenha0[icsz] >= 65) {
				if (criptosenha0[icsz] + (int)this->numericUpDown3->Value > 90) {
					criptosenha0[icsz] += (int)this->numericUpDown3->Value - 26;
				}
				else {
					criptosenha0[icsz] += (int)this->numericUpDown3->Value;
				}
			}
			else if (criptosenha0[icsz] >= 97 && criptosenha0[icsz] <= 122) {
				if (criptosenha0[icsz] + (int)this->numericUpDown3->Value > 122) {
					criptosenha0[icsz] += (int)this->numericUpDown3->Value-26;
				} else {
					criptosenha0[icsz] += (int)this->numericUpDown3->Value;
				}
				
			}
			else if (criptosenha0[icsz] <= 57 && criptosenha0[icsz] >= 48) {
				if (criptosenha0[icsz] + (int)this->numericUpDown3->Value > 57) {
					criptosenha0[icsz] += (int)this->numericUpDown3->Value - 10;
				}
				else {
					criptosenha0[icsz] += (int)this->numericUpDown3->Value;
				}
			}
		}
		this->criptografo->Text = gcnew System::String(criptosenha0.c_str());
	}
	private: System::Void crip_parsum_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string criptosenhax;
		MarshalString(this->criptografo->Text, criptosenhax);
		for (int ic1sz = 0; ic1sz < criptosenhax.length(); ic1sz++) {
			if ((ic1sz + 1) % (int)this->numericUpDown5->Value == 0) {
				if (criptosenhax[ic1sz] <= 90 && criptosenhax[ic1sz] >= 65) {
					if (criptosenhax[ic1sz] + (int)this->numericUpDown4->Value > 90) {
						criptosenhax[ic1sz] += (int)this->numericUpDown4->Value - 26;
					}
					else {
						criptosenhax[ic1sz] += (int)this->numericUpDown4->Value;
					}
				}
				else if (criptosenhax[ic1sz] >= 97 && criptosenhax[ic1sz] <= 122) {
					if (criptosenhax[ic1sz] + (int)this->numericUpDown4->Value > 122) {
						criptosenhax[ic1sz] += (int)this->numericUpDown4->Value - 26;
					}
					else {
						criptosenhax[ic1sz] += (int)this->numericUpDown4->Value;
					}

				}
				else if (criptosenhax[ic1sz] <= 57 && criptosenhax[ic1sz] >= 48) {
					if (criptosenhax[ic1sz] + (int)this->numericUpDown4->Value%10 > 57) {
						criptosenhax[ic1sz] += (int)this->numericUpDown4->Value%10 - 10;
					}
					else {
						criptosenhax[ic1sz] += (int)this->numericUpDown4->Value;
					}
				}
			}
		}
		this->criptografo->Text = gcnew System::String(criptosenhax.c_str());
	}
	private: System::Void numericUpDown5_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		if (numericUpDown5->Value < 1) {
			numericUpDown5->Value = 1;
		}
		else if (numericUpDown5->Value > 100) {
			numericUpDown5->Value = 100;
		}
	}
};
}
