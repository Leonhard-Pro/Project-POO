#include "pch.h"

namespace projet {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
public ref class MyForm : public System::Windows::Forms::Form
{
public:
	MyForm(void)
	{
		InitializeComponent();
		//
		//TODO: ajoutez ici le code du constructeur
		//
	}

protected:
	/// <summary>
	/// Nettoyage des ressources utilisées.
	/// </summary>
	~MyForm()
	{
		if (components)
		{
			delete components;
		}
	}
private: NS_Comp_Svc::Services^ oSvc;
private: System::Data::DataSet^ oDs;
private: System::Windows::Forms::Button^ gst_clients;
private: System::Windows::Forms::Button^ gst_personnels;
private: System::Windows::Forms::Button^ gst_stats;
private:
	/// <summary>
	/// Variable nécessaire au concepteur.
	/// </summary>
	System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
	/// <summary>
	/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
	/// le contenu de cette méthode avec l'éditeur de code.
	/// </summary>
	void InitializeComponent(void)
	{
		this->gst_clients = (gcnew System::Windows::Forms::Button());
		this->gst_personnels = (gcnew System::Windows::Forms::Button());
		this->gst_stats = (gcnew System::Windows::Forms::Button());
		this->SuspendLayout();
		// 
		// gst_clients
		// 
		this->gst_clients->Location = System::Drawing::Point(12, 103);
		this->gst_clients->Name = L"gst_clients";
		this->gst_clients->Size = System::Drawing::Size(96, 45);
		this->gst_clients->TabIndex = 0;
		this->gst_clients->Text = L"Gestion Clients";
		this->gst_clients->UseVisualStyleBackColor = true;
		this->gst_clients->Click += gcnew System::EventHandler(this, &MyForm::gst_clients_Click);
		// 
		// gst_personnels
		// 
		this->gst_personnels->Location = System::Drawing::Point(114, 103);
		this->gst_personnels->Name = L"gst_personnels";
		this->gst_personnels->Size = System::Drawing::Size(105, 45);
		this->gst_personnels->TabIndex = 1;
		this->gst_personnels->Text = L"Gestion Personnels";
		this->gst_personnels->UseVisualStyleBackColor = true;
		this->gst_personnels->Click += gcnew System::EventHandler(this, &MyForm::gst_personnels_Click);
		// 
		// gst_stats
		// 
		this->gst_stats->Location = System::Drawing::Point(225, 103);
		this->gst_stats->Name = L"gst_stats";
		this->gst_stats->Size = System::Drawing::Size(96, 45);
		this->gst_stats->TabIndex = 2;
		this->gst_stats->Text = L"Gestion Statistiques";
		this->gst_stats->UseVisualStyleBackColor = true;
		this->gst_stats->Click += gcnew System::EventHandler(this, &MyForm::gst_stats_Click);
		// 
		// MyForm
		// 
		this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
		this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
		this->ClientSize = System::Drawing::Size(333, 266);
		this->Controls->Add(this->gst_stats);
		this->Controls->Add(this->gst_personnels);
		this->Controls->Add(this->gst_clients);
		this->Name = L"Appli_POO";
		this->Text = L"Appli gestion de BDD";
		this->ResumeLayout(false);

	}
#pragma endregion
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
{
	this->oSvc = gcnew NS_Comp_Svc::Services();
}
private: System::Void gst_clients_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gst_personnels_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void gst_stats_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}