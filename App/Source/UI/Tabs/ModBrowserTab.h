#pragma once
#include "ModListTab.h"
#include <KlemmUI/UI/UIScrollBox.h>
#include "NexusModsAPI.h"

class ModBrowserTab : public ModListTab
{
	static void LoadMainPageAsync();
	std::vector<KlemmUI::UIBackground*> Images;
	std::vector<unsigned int> LoadedTextures;

public:
	ModBrowserTab();

	void LoadMainPage();

	struct ModsSection
	{
		std::string Title;
		std::vector<NexusModsAPI::ModInfo> Mods;
	};

	void GenerateSection(ModsSection Section, size_t& Index);
	void UpdateImages();
	virtual void Update() override;
	virtual void OnResized() override;

	KlemmUI::UIScrollBox* ModsScrollBox = nullptr;
};