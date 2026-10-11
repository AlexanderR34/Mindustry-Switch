#include "mindustry/gen/Icon.h"
#include "mindustry/ui/Fonts.h"
#include "java/lang/Object.h"
#include "arc/graphics/g2d/Font.h"
#include "mindustry/gen/Icon.h"
#include "arc/scene/style/TextureRegionDrawable.h"
#include "arc/struct/ObjectMap.h"

extern "C" {

jobject SF_mindustry_gen_Icon_icons;
jobject SF_mindustry_gen_Icon_fileTextFillSmall;
jobject SF_mindustry_gen_Icon_fileTextFill;
jobject SF_mindustry_gen_Icon_fileSmall;
jobject SF_mindustry_gen_Icon_file;
jobject SF_mindustry_gen_Icon_fileTextSmall;
jobject SF_mindustry_gen_Icon_fileText;
jobject SF_mindustry_gen_Icon_leftSmall;
jobject SF_mindustry_gen_Icon_left;
jobject SF_mindustry_gen_Icon_rightSmall;
jobject SF_mindustry_gen_Icon_right;
jobject SF_mindustry_gen_Icon_upSmall;
jobject SF_mindustry_gen_Icon_up;
jobject SF_mindustry_gen_Icon_downSmall;
jobject SF_mindustry_gen_Icon_down;
jobject SF_mindustry_gen_Icon_homeSmall;
jobject SF_mindustry_gen_Icon_home;
jobject SF_mindustry_gen_Icon_okSmall;
jobject SF_mindustry_gen_Icon_ok;
jobject SF_mindustry_gen_Icon_imageSmall;
jobject SF_mindustry_gen_Icon_image;
jobject SF_mindustry_gen_Icon_starSmall;
jobject SF_mindustry_gen_Icon_star;
jobject SF_mindustry_gen_Icon_resizeSmall;
jobject SF_mindustry_gen_Icon_resize;
jobject SF_mindustry_gen_Icon_wrenchSmall;
jobject SF_mindustry_gen_Icon_wrench;
jobject SF_mindustry_gen_Icon_githubSquareSmall;
jobject SF_mindustry_gen_Icon_githubSquare;
jobject SF_mindustry_gen_Icon_fileImageSmall;
jobject SF_mindustry_gen_Icon_fileImage;
jobject SF_mindustry_gen_Icon_addSmall;
jobject SF_mindustry_gen_Icon_add;
jobject SF_mindustry_gen_Icon_editSmall;
jobject SF_mindustry_gen_Icon_edit;
jobject SF_mindustry_gen_Icon_chartBarSmall;
jobject SF_mindustry_gen_Icon_chartBar;
jobject SF_mindustry_gen_Icon_planeOutlineSmall;
jobject SF_mindustry_gen_Icon_planeOutline;
jobject SF_mindustry_gen_Icon_filterSmall;
jobject SF_mindustry_gen_Icon_filter;
jobject SF_mindustry_gen_Icon_folderSmall;
jobject SF_mindustry_gen_Icon_folder;
jobject SF_mindustry_gen_Icon_steamSmall;
jobject SF_mindustry_gen_Icon_steam;
jobject SF_mindustry_gen_Icon_downOpenSmall;
jobject SF_mindustry_gen_Icon_downOpen;
jobject SF_mindustry_gen_Icon_leftOpenSmall;
jobject SF_mindustry_gen_Icon_leftOpen;
jobject SF_mindustry_gen_Icon_upOpenSmall;
jobject SF_mindustry_gen_Icon_upOpen;
jobject SF_mindustry_gen_Icon_mapSmall;
jobject SF_mindustry_gen_Icon_map;
jobject SF_mindustry_gen_Icon_rotateSmall;
jobject SF_mindustry_gen_Icon_rotate;
jobject SF_mindustry_gen_Icon_playSmall;
jobject SF_mindustry_gen_Icon_play;
jobject SF_mindustry_gen_Icon_pauseSmall;
jobject SF_mindustry_gen_Icon_pause;
jobject SF_mindustry_gen_Icon_listSmall;
jobject SF_mindustry_gen_Icon_list;
jobject SF_mindustry_gen_Icon_cancelSmall;
jobject SF_mindustry_gen_Icon_cancel;
jobject SF_mindustry_gen_Icon_moveSmall;
jobject SF_mindustry_gen_Icon_move;
jobject SF_mindustry_gen_Icon_terminalSmall;
jobject SF_mindustry_gen_Icon_terminal;
jobject SF_mindustry_gen_Icon_undoSmall;
jobject SF_mindustry_gen_Icon_undo;
jobject SF_mindustry_gen_Icon_redoSmall;
jobject SF_mindustry_gen_Icon_redo;
jobject SF_mindustry_gen_Icon_infoSmall;
jobject SF_mindustry_gen_Icon_info;
jobject SF_mindustry_gen_Icon_infoCircleSmall;
jobject SF_mindustry_gen_Icon_infoCircle;
jobject SF_mindustry_gen_Icon_rightOpenOutSmall;
jobject SF_mindustry_gen_Icon_rightOpenOut;
jobject SF_mindustry_gen_Icon_rightOpenSmall;
jobject SF_mindustry_gen_Icon_rightOpen;
jobject SF_mindustry_gen_Icon_wavesSmall;
jobject SF_mindustry_gen_Icon_waves;
jobject SF_mindustry_gen_Icon_filtersSmall;
jobject SF_mindustry_gen_Icon_filters;
jobject SF_mindustry_gen_Icon_layersSmall;
jobject SF_mindustry_gen_Icon_layers;
jobject SF_mindustry_gen_Icon_eraserSmall;
jobject SF_mindustry_gen_Icon_eraser;
jobject SF_mindustry_gen_Icon_bookOpenSmall;
jobject SF_mindustry_gen_Icon_bookOpen;
jobject SF_mindustry_gen_Icon_gridSmall;
jobject SF_mindustry_gen_Icon_grid;
jobject SF_mindustry_gen_Icon_flipXSmall;
jobject SF_mindustry_gen_Icon_flipX;
jobject SF_mindustry_gen_Icon_flipYSmall;
jobject SF_mindustry_gen_Icon_flipY;
jobject SF_mindustry_gen_Icon_diagonalSmall;
jobject SF_mindustry_gen_Icon_diagonal;
jobject SF_mindustry_gen_Icon_discordSmall;
jobject SF_mindustry_gen_Icon_discord;
jobject SF_mindustry_gen_Icon_redditAlienSmall;
jobject SF_mindustry_gen_Icon_redditAlien;
jobject SF_mindustry_gen_Icon_githubSmall;
jobject SF_mindustry_gen_Icon_github;
jobject SF_mindustry_gen_Icon_googleplaySmall;
jobject SF_mindustry_gen_Icon_googleplay;
jobject SF_mindustry_gen_Icon_androidSmall;
jobject SF_mindustry_gen_Icon_android;
jobject SF_mindustry_gen_Icon_trelloSmall;
jobject SF_mindustry_gen_Icon_trello;
jobject SF_mindustry_gen_Icon_logicSmall;
jobject SF_mindustry_gen_Icon_logic;
jobject SF_mindustry_gen_Icon_distributionSmall;
jobject SF_mindustry_gen_Icon_distribution;
jobject SF_mindustry_gen_Icon_hammerSmall;
jobject SF_mindustry_gen_Icon_hammer;
jobject SF_mindustry_gen_Icon_saveSmall;
jobject SF_mindustry_gen_Icon_save;
jobject SF_mindustry_gen_Icon_linkSmall;
jobject SF_mindustry_gen_Icon_link;
jobject SF_mindustry_gen_Icon_itchioSmall;
jobject SF_mindustry_gen_Icon_itchio;
jobject SF_mindustry_gen_Icon_lineSmall;
jobject SF_mindustry_gen_Icon_line;
jobject SF_mindustry_gen_Icon_adminSmall;
jobject SF_mindustry_gen_Icon_admin;
jobject SF_mindustry_gen_Icon_spray1Small;
jobject SF_mindustry_gen_Icon_spray1;
jobject SF_mindustry_gen_Icon_craftingSmall;
jobject SF_mindustry_gen_Icon_crafting;
jobject SF_mindustry_gen_Icon_fillSmall;
jobject SF_mindustry_gen_Icon_fill;
jobject SF_mindustry_gen_Icon_pasteSmall;
jobject SF_mindustry_gen_Icon_paste;
jobject SF_mindustry_gen_Icon_effectSmall;
jobject SF_mindustry_gen_Icon_effect;
jobject SF_mindustry_gen_Icon_bookSmall;
jobject SF_mindustry_gen_Icon_book;
jobject SF_mindustry_gen_Icon_liquidSmall;
jobject SF_mindustry_gen_Icon_liquid;
jobject SF_mindustry_gen_Icon_hostSmall;
jobject SF_mindustry_gen_Icon_host;
jobject SF_mindustry_gen_Icon_productionSmall;
jobject SF_mindustry_gen_Icon_production;
jobject SF_mindustry_gen_Icon_exitSmall;
jobject SF_mindustry_gen_Icon_exit;
jobject SF_mindustry_gen_Icon_modePvpSmall;
jobject SF_mindustry_gen_Icon_modePvp;
jobject SF_mindustry_gen_Icon_modeAttackSmall;
jobject SF_mindustry_gen_Icon_modeAttack;
jobject SF_mindustry_gen_Icon_refresh1Small;
jobject SF_mindustry_gen_Icon_refresh1;
jobject SF_mindustry_gen_Icon_noneSmall;
jobject SF_mindustry_gen_Icon_none;
jobject SF_mindustry_gen_Icon_pencilSmall;
jobject SF_mindustry_gen_Icon_pencil;
jobject SF_mindustry_gen_Icon_refreshSmall;
jobject SF_mindustry_gen_Icon_refresh;
jobject SF_mindustry_gen_Icon_modeSurvivalSmall;
jobject SF_mindustry_gen_Icon_modeSurvival;
jobject SF_mindustry_gen_Icon_commandRallySmall;
jobject SF_mindustry_gen_Icon_commandRally;
jobject SF_mindustry_gen_Icon_unitsSmall;
jobject SF_mindustry_gen_Icon_units;
jobject SF_mindustry_gen_Icon_commandAttackSmall;
jobject SF_mindustry_gen_Icon_commandAttack;
jobject SF_mindustry_gen_Icon_trashSmall;
jobject SF_mindustry_gen_Icon_trash;
jobject SF_mindustry_gen_Icon_chatSmall;
jobject SF_mindustry_gen_Icon_chat;
jobject SF_mindustry_gen_Icon_turretSmall;
jobject SF_mindustry_gen_Icon_turret;
jobject SF_mindustry_gen_Icon_playersSmall;
jobject SF_mindustry_gen_Icon_players;
jobject SF_mindustry_gen_Icon_editorSmall;
jobject SF_mindustry_gen_Icon_editor;
jobject SF_mindustry_gen_Icon_copySmall;
jobject SF_mindustry_gen_Icon_copy;
jobject SF_mindustry_gen_Icon_treeSmall;
jobject SF_mindustry_gen_Icon_tree;
jobject SF_mindustry_gen_Icon_lockOpenSmall;
jobject SF_mindustry_gen_Icon_lockOpen;
jobject SF_mindustry_gen_Icon_pickSmall;
jobject SF_mindustry_gen_Icon_pick;
jobject SF_mindustry_gen_Icon_exportSmall;
jobject SF_mindustry_gen_Icon_export;
jobject SF_mindustry_gen_Icon_downloadSmall;
jobject SF_mindustry_gen_Icon_download;
jobject SF_mindustry_gen_Icon_uploadSmall;
jobject SF_mindustry_gen_Icon_upload;
jobject SF_mindustry_gen_Icon_settingsSmall;
jobject SF_mindustry_gen_Icon_settings;
jobject SF_mindustry_gen_Icon_spraySmall;
jobject SF_mindustry_gen_Icon_spray;
jobject SF_mindustry_gen_Icon_zoomSmall;
jobject SF_mindustry_gen_Icon_zoom;
jobject SF_mindustry_gen_Icon_powerOldSmall;
jobject SF_mindustry_gen_Icon_powerOld;
jobject SF_mindustry_gen_Icon_powerSmall;
jobject SF_mindustry_gen_Icon_power;
jobject SF_mindustry_gen_Icon_menuSmall;
jobject SF_mindustry_gen_Icon_menu;
jobject SF_mindustry_gen_Icon_lockSmall;
jobject SF_mindustry_gen_Icon_lock;
jobject SF_mindustry_gen_Icon_eyeSmall;
jobject SF_mindustry_gen_Icon_eye;
jobject SF_mindustry_gen_Icon_eyeOffSmall;
jobject SF_mindustry_gen_Icon_eyeOff;
jobject SF_mindustry_gen_Icon_warningSmall;
jobject SF_mindustry_gen_Icon_warning;
jobject SF_mindustry_gen_Icon_terrainSmall;
jobject SF_mindustry_gen_Icon_terrain;
jobject SF_mindustry_gen_Icon_defenseSmall;
jobject SF_mindustry_gen_Icon_defense;
jobject SF_mindustry_gen_Icon_planetSmall;
jobject SF_mindustry_gen_Icon_planet;
jobject SF_mindustry_gen_Icon_arrowNoteSmall;
jobject SF_mindustry_gen_Icon_arrowNote;
jobject SF_mindustry_gen_Icon_musicSmall;
jobject SF_mindustry_gen_Icon_music;
jobject SF_mindustry_gen_Icon_fileAudioSmall;
jobject SF_mindustry_gen_Icon_fileAudio;
jobject SF_mindustry_gen_Icon_volumeOffSmall;
jobject SF_mindustry_gen_Icon_volumeOff;
jobject SF_mindustry_gen_Icon_volumeDownSmall;
jobject SF_mindustry_gen_Icon_volumeDown;
jobject SF_mindustry_gen_Icon_volumeUpSmall;
jobject SF_mindustry_gen_Icon_volumeUp;
jobject SF_mindustry_gen_Icon_tagSmall;
jobject SF_mindustry_gen_Icon_tag;
jobject SF_mindustry_gen_Icon_tagsSmall;
jobject SF_mindustry_gen_Icon_tags;
jobject SF_mindustry_gen_Icon_battery4Small;
jobject SF_mindustry_gen_Icon_battery4;
jobject SF_mindustry_gen_Icon_battery3Small;
jobject SF_mindustry_gen_Icon_battery3;
jobject SF_mindustry_gen_Icon_battery2Small;
jobject SF_mindustry_gen_Icon_battery2;
jobject SF_mindustry_gen_Icon_battery1Small;
jobject SF_mindustry_gen_Icon_battery1;
jobject SF_mindustry_gen_Icon_battery0Small;
jobject SF_mindustry_gen_Icon_battery0;
jobject SF_mindustry_gen_Icon_fileCodeSmall;
jobject SF_mindustry_gen_Icon_fileCode;
jobject SF_mindustry_gen_Icon_fileVideoSmall;
jobject SF_mindustry_gen_Icon_fileVideo;
jobject SF_mindustry_gen_Icon_fileArchiveSmall;
jobject SF_mindustry_gen_Icon_fileArchive;
jobject SF_mindustry_gen_Icon_folderOpenSmall;
jobject SF_mindustry_gen_Icon_folderOpen;
jobject SF_mindustry_gen_Icon_folderEmptySmall;
jobject SF_mindustry_gen_Icon_folderEmpty;
jobject SF_mindustry_gen_Icon_folderOpenEmptySmall;
jobject SF_mindustry_gen_Icon_folderOpenEmpty;
jobject SF_mindustry_gen_Icon_inboxSmall;
jobject SF_mindustry_gen_Icon_inbox;
jobject SF_mindustry_gen_Icon_sitemapSmall;
jobject SF_mindustry_gen_Icon_sitemap;
jobject SF_mindustry_gen_Icon_cloudSmall;
jobject SF_mindustry_gen_Icon_cloud;
jobject SF_mindustry_gen_Icon_uploadCloudSmall;
jobject SF_mindustry_gen_Icon_uploadCloud;
jobject SF_mindustry_gen_Icon_downloadCloudSmall;
jobject SF_mindustry_gen_Icon_downloadCloud;
jobject SF_mindustry_gen_Icon_rainSmall;
jobject SF_mindustry_gen_Icon_rain;
jobject SF_mindustry_gen_Icon_cloudSunSmall;
jobject SF_mindustry_gen_Icon_cloudSun;
jobject SF_mindustry_gen_Icon_drizzleSmall;
jobject SF_mindustry_gen_Icon_drizzle;
jobject SF_mindustry_gen_Icon_cloudFlashSmall;
jobject SF_mindustry_gen_Icon_cloudFlash;
jobject SF_mindustry_gen_Icon_cloudWindSmall;
jobject SF_mindustry_gen_Icon_cloudWind;
jobject SF_mindustry_gen_Icon_boxSmall;
jobject SF_mindustry_gen_Icon_box;
jobject SF_mindustry_gen_Icon_chartAltSmall;
jobject SF_mindustry_gen_Icon_chartAlt;

void mark_mindustry_gen_Icon(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_mindustry_gen_Icon_icons)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_icons)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_icons, mark, depth + 1);
		if (SF_mindustry_gen_Icon_fileTextFillSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_fileTextFillSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_fileTextFillSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_fileTextFill)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_fileTextFill)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_fileTextFill, mark, depth + 1);
		if (SF_mindustry_gen_Icon_fileSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_fileSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_fileSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_file)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_file)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_file, mark, depth + 1);
		if (SF_mindustry_gen_Icon_fileTextSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_fileTextSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_fileTextSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_fileText)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_fileText)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_fileText, mark, depth + 1);
		if (SF_mindustry_gen_Icon_leftSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_leftSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_leftSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_left)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_left)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_left, mark, depth + 1);
		if (SF_mindustry_gen_Icon_rightSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_rightSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_rightSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_right)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_right)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_right, mark, depth + 1);
		if (SF_mindustry_gen_Icon_upSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_upSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_upSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_up)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_up)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_up, mark, depth + 1);
		if (SF_mindustry_gen_Icon_downSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_downSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_downSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_down)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_down)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_down, mark, depth + 1);
		if (SF_mindustry_gen_Icon_homeSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_homeSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_homeSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_home)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_home)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_home, mark, depth + 1);
		if (SF_mindustry_gen_Icon_okSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_okSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_okSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_ok)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_ok)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_ok, mark, depth + 1);
		if (SF_mindustry_gen_Icon_imageSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_imageSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_imageSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_image)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_image)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_image, mark, depth + 1);
		if (SF_mindustry_gen_Icon_starSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_starSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_starSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_star)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_star)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_star, mark, depth + 1);
		if (SF_mindustry_gen_Icon_resizeSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_resizeSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_resizeSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_resize)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_resize)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_resize, mark, depth + 1);
		if (SF_mindustry_gen_Icon_wrenchSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_wrenchSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_wrenchSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_wrench)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_wrench)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_wrench, mark, depth + 1);
		if (SF_mindustry_gen_Icon_githubSquareSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_githubSquareSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_githubSquareSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_githubSquare)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_githubSquare)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_githubSquare, mark, depth + 1);
		if (SF_mindustry_gen_Icon_fileImageSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_fileImageSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_fileImageSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_fileImage)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_fileImage)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_fileImage, mark, depth + 1);
		if (SF_mindustry_gen_Icon_addSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_addSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_addSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_add)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_add)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_add, mark, depth + 1);
		if (SF_mindustry_gen_Icon_editSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_editSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_editSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_edit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_edit)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_edit, mark, depth + 1);
		if (SF_mindustry_gen_Icon_chartBarSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_chartBarSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_chartBarSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_chartBar)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_chartBar)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_chartBar, mark, depth + 1);
		if (SF_mindustry_gen_Icon_planeOutlineSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_planeOutlineSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_planeOutlineSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_planeOutline)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_planeOutline)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_planeOutline, mark, depth + 1);
		if (SF_mindustry_gen_Icon_filterSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_filterSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_filterSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_filter)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_filter)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_filter, mark, depth + 1);
		if (SF_mindustry_gen_Icon_folderSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_folderSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_folderSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_folder)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_folder)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_folder, mark, depth + 1);
		if (SF_mindustry_gen_Icon_steamSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_steamSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_steamSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_steam)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_steam)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_steam, mark, depth + 1);
		if (SF_mindustry_gen_Icon_downOpenSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_downOpenSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_downOpenSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_downOpen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_downOpen)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_downOpen, mark, depth + 1);
		if (SF_mindustry_gen_Icon_leftOpenSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_leftOpenSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_leftOpenSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_leftOpen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_leftOpen)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_leftOpen, mark, depth + 1);
		if (SF_mindustry_gen_Icon_upOpenSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_upOpenSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_upOpenSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_upOpen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_upOpen)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_upOpen, mark, depth + 1);
		if (SF_mindustry_gen_Icon_mapSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_mapSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_mapSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_map)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_map)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_map, mark, depth + 1);
		if (SF_mindustry_gen_Icon_rotateSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_rotateSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_rotateSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_rotate)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_rotate)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_rotate, mark, depth + 1);
		if (SF_mindustry_gen_Icon_playSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_playSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_playSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_play)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_play)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_play, mark, depth + 1);
		if (SF_mindustry_gen_Icon_pauseSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_pauseSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_pauseSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_pause)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_pause)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_pause, mark, depth + 1);
		if (SF_mindustry_gen_Icon_listSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_listSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_listSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_list)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_list)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_list, mark, depth + 1);
		if (SF_mindustry_gen_Icon_cancelSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_cancelSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_cancelSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_cancel)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_cancel)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_cancel, mark, depth + 1);
		if (SF_mindustry_gen_Icon_moveSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_moveSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_moveSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_move)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_move)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_move, mark, depth + 1);
		if (SF_mindustry_gen_Icon_terminalSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_terminalSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_terminalSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_terminal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_terminal)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_terminal, mark, depth + 1);
		if (SF_mindustry_gen_Icon_undoSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_undoSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_undoSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_undo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_undo)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_undo, mark, depth + 1);
		if (SF_mindustry_gen_Icon_redoSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_redoSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_redoSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_redo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_redo)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_redo, mark, depth + 1);
		if (SF_mindustry_gen_Icon_infoSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_infoSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_infoSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_info)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_info)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_info, mark, depth + 1);
		if (SF_mindustry_gen_Icon_infoCircleSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_infoCircleSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_infoCircleSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_infoCircle)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_infoCircle)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_infoCircle, mark, depth + 1);
		if (SF_mindustry_gen_Icon_rightOpenOutSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_rightOpenOutSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_rightOpenOutSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_rightOpenOut)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_rightOpenOut)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_rightOpenOut, mark, depth + 1);
		if (SF_mindustry_gen_Icon_rightOpenSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_rightOpenSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_rightOpenSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_rightOpen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_rightOpen)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_rightOpen, mark, depth + 1);
		if (SF_mindustry_gen_Icon_wavesSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_wavesSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_wavesSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_waves)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_waves)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_waves, mark, depth + 1);
		if (SF_mindustry_gen_Icon_filtersSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_filtersSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_filtersSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_filters)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_filters)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_filters, mark, depth + 1);
		if (SF_mindustry_gen_Icon_layersSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_layersSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_layersSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_layers)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_layers)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_layers, mark, depth + 1);
		if (SF_mindustry_gen_Icon_eraserSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_eraserSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_eraserSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_eraser)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_eraser)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_eraser, mark, depth + 1);
		if (SF_mindustry_gen_Icon_bookOpenSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_bookOpenSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_bookOpenSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_bookOpen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_bookOpen)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_bookOpen, mark, depth + 1);
		if (SF_mindustry_gen_Icon_gridSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_gridSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_gridSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_grid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_grid)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_grid, mark, depth + 1);
		if (SF_mindustry_gen_Icon_flipXSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_flipXSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_flipXSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_flipX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_flipX)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_flipX, mark, depth + 1);
		if (SF_mindustry_gen_Icon_flipYSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_flipYSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_flipYSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_flipY)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_flipY)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_flipY, mark, depth + 1);
		if (SF_mindustry_gen_Icon_diagonalSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_diagonalSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_diagonalSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_diagonal)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_diagonal)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_diagonal, mark, depth + 1);
		if (SF_mindustry_gen_Icon_discordSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_discordSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_discordSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_discord)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_discord)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_discord, mark, depth + 1);
		if (SF_mindustry_gen_Icon_redditAlienSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_redditAlienSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_redditAlienSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_redditAlien)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_redditAlien)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_redditAlien, mark, depth + 1);
		if (SF_mindustry_gen_Icon_githubSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_githubSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_githubSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_github)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_github)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_github, mark, depth + 1);
		if (SF_mindustry_gen_Icon_googleplaySmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_googleplaySmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_googleplaySmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_googleplay)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_googleplay)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_googleplay, mark, depth + 1);
		if (SF_mindustry_gen_Icon_androidSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_androidSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_androidSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_android)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_android)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_android, mark, depth + 1);
		if (SF_mindustry_gen_Icon_trelloSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_trelloSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_trelloSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_trello)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_trello)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_trello, mark, depth + 1);
		if (SF_mindustry_gen_Icon_logicSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_logicSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_logicSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_logic)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_logic)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_logic, mark, depth + 1);
		if (SF_mindustry_gen_Icon_distributionSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_distributionSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_distributionSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_distribution)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_distribution)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_distribution, mark, depth + 1);
		if (SF_mindustry_gen_Icon_hammerSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_hammerSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_hammerSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_hammer)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_hammer)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_hammer, mark, depth + 1);
		if (SF_mindustry_gen_Icon_saveSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_saveSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_saveSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_save)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_save)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_save, mark, depth + 1);
		if (SF_mindustry_gen_Icon_linkSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_linkSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_linkSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_link)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_link)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_link, mark, depth + 1);
		if (SF_mindustry_gen_Icon_itchioSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_itchioSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_itchioSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_itchio)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_itchio)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_itchio, mark, depth + 1);
		if (SF_mindustry_gen_Icon_lineSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_lineSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_lineSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_line)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_line)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_line, mark, depth + 1);
		if (SF_mindustry_gen_Icon_adminSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_adminSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_adminSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_admin)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_admin)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_admin, mark, depth + 1);
		if (SF_mindustry_gen_Icon_spray1Small)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_spray1Small)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_spray1Small, mark, depth + 1);
		if (SF_mindustry_gen_Icon_spray1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_spray1)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_spray1, mark, depth + 1);
		if (SF_mindustry_gen_Icon_craftingSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_craftingSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_craftingSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_crafting)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_crafting)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_crafting, mark, depth + 1);
		if (SF_mindustry_gen_Icon_fillSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_fillSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_fillSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_fill)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_fill)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_fill, mark, depth + 1);
		if (SF_mindustry_gen_Icon_pasteSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_pasteSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_pasteSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_paste)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_paste)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_paste, mark, depth + 1);
		if (SF_mindustry_gen_Icon_effectSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_effectSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_effectSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_effect)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_effect)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_effect, mark, depth + 1);
		if (SF_mindustry_gen_Icon_bookSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_bookSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_bookSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_book)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_book)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_book, mark, depth + 1);
		if (SF_mindustry_gen_Icon_liquidSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_liquidSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_liquidSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_liquid)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_liquid)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_liquid, mark, depth + 1);
		if (SF_mindustry_gen_Icon_hostSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_hostSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_hostSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_host)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_host)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_host, mark, depth + 1);
		if (SF_mindustry_gen_Icon_productionSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_productionSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_productionSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_production)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_production)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_production, mark, depth + 1);
		if (SF_mindustry_gen_Icon_exitSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_exitSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_exitSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_exit)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_exit)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_exit, mark, depth + 1);
		if (SF_mindustry_gen_Icon_modePvpSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_modePvpSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_modePvpSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_modePvp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_modePvp)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_modePvp, mark, depth + 1);
		if (SF_mindustry_gen_Icon_modeAttackSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_modeAttackSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_modeAttackSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_modeAttack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_modeAttack)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_modeAttack, mark, depth + 1);
		if (SF_mindustry_gen_Icon_refresh1Small)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_refresh1Small)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_refresh1Small, mark, depth + 1);
		if (SF_mindustry_gen_Icon_refresh1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_refresh1)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_refresh1, mark, depth + 1);
		if (SF_mindustry_gen_Icon_noneSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_noneSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_noneSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_none)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_none)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_none, mark, depth + 1);
		if (SF_mindustry_gen_Icon_pencilSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_pencilSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_pencilSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_pencil)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_pencil)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_pencil, mark, depth + 1);
		if (SF_mindustry_gen_Icon_refreshSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_refreshSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_refreshSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_refresh)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_refresh)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_refresh, mark, depth + 1);
		if (SF_mindustry_gen_Icon_modeSurvivalSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_modeSurvivalSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_modeSurvivalSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_modeSurvival)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_modeSurvival)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_modeSurvival, mark, depth + 1);
		if (SF_mindustry_gen_Icon_commandRallySmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_commandRallySmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_commandRallySmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_commandRally)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_commandRally)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_commandRally, mark, depth + 1);
		if (SF_mindustry_gen_Icon_unitsSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_unitsSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_unitsSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_units)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_units)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_units, mark, depth + 1);
		if (SF_mindustry_gen_Icon_commandAttackSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_commandAttackSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_commandAttackSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_commandAttack)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_commandAttack)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_commandAttack, mark, depth + 1);
		if (SF_mindustry_gen_Icon_trashSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_trashSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_trashSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_trash)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_trash)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_trash, mark, depth + 1);
		if (SF_mindustry_gen_Icon_chatSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_chatSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_chatSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_chat)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_chat)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_chat, mark, depth + 1);
		if (SF_mindustry_gen_Icon_turretSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_turretSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_turretSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_turret)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_turret)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_turret, mark, depth + 1);
		if (SF_mindustry_gen_Icon_playersSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_playersSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_playersSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_players)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_players)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_players, mark, depth + 1);
		if (SF_mindustry_gen_Icon_editorSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_editorSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_editorSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_editor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_editor)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_editor, mark, depth + 1);
		if (SF_mindustry_gen_Icon_copySmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_copySmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_copySmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_copy)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_copy)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_copy, mark, depth + 1);
		if (SF_mindustry_gen_Icon_treeSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_treeSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_treeSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_tree)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_tree)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_tree, mark, depth + 1);
		if (SF_mindustry_gen_Icon_lockOpenSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_lockOpenSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_lockOpenSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_lockOpen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_lockOpen)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_lockOpen, mark, depth + 1);
		if (SF_mindustry_gen_Icon_pickSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_pickSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_pickSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_pick)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_pick)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_pick, mark, depth + 1);
		if (SF_mindustry_gen_Icon_exportSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_exportSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_exportSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_export)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_export)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_export, mark, depth + 1);
		if (SF_mindustry_gen_Icon_downloadSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_downloadSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_downloadSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_download)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_download)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_download, mark, depth + 1);
		if (SF_mindustry_gen_Icon_uploadSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_uploadSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_uploadSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_upload)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_upload)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_upload, mark, depth + 1);
		if (SF_mindustry_gen_Icon_settingsSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_settingsSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_settingsSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_settings)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_settings)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_settings, mark, depth + 1);
		if (SF_mindustry_gen_Icon_spraySmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_spraySmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_spraySmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_spray)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_spray)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_spray, mark, depth + 1);
		if (SF_mindustry_gen_Icon_zoomSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_zoomSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_zoomSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_zoom)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_zoom)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_zoom, mark, depth + 1);
		if (SF_mindustry_gen_Icon_powerOldSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_powerOldSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_powerOldSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_powerOld)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_powerOld)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_powerOld, mark, depth + 1);
		if (SF_mindustry_gen_Icon_powerSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_powerSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_powerSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_power)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_power)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_power, mark, depth + 1);
		if (SF_mindustry_gen_Icon_menuSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_menuSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_menuSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_menu)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_menu)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_menu, mark, depth + 1);
		if (SF_mindustry_gen_Icon_lockSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_lockSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_lockSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_lock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_lock)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_lock, mark, depth + 1);
		if (SF_mindustry_gen_Icon_eyeSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_eyeSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_eyeSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_eye)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_eye)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_eye, mark, depth + 1);
		if (SF_mindustry_gen_Icon_eyeOffSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_eyeOffSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_eyeOffSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_eyeOff)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_eyeOff)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_eyeOff, mark, depth + 1);
		if (SF_mindustry_gen_Icon_warningSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_warningSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_warningSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_warning)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_warning)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_warning, mark, depth + 1);
		if (SF_mindustry_gen_Icon_terrainSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_terrainSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_terrainSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_terrain)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_terrain)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_terrain, mark, depth + 1);
		if (SF_mindustry_gen_Icon_defenseSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_defenseSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_defenseSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_defense)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_defense)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_defense, mark, depth + 1);
		if (SF_mindustry_gen_Icon_planetSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_planetSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_planetSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_planet)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_planet)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_planet, mark, depth + 1);
		if (SF_mindustry_gen_Icon_arrowNoteSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_arrowNoteSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_arrowNoteSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_arrowNote)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_arrowNote)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_arrowNote, mark, depth + 1);
		if (SF_mindustry_gen_Icon_musicSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_musicSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_musicSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_music)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_music)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_music, mark, depth + 1);
		if (SF_mindustry_gen_Icon_fileAudioSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_fileAudioSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_fileAudioSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_fileAudio)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_fileAudio)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_fileAudio, mark, depth + 1);
		if (SF_mindustry_gen_Icon_volumeOffSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_volumeOffSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_volumeOffSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_volumeOff)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_volumeOff)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_volumeOff, mark, depth + 1);
		if (SF_mindustry_gen_Icon_volumeDownSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_volumeDownSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_volumeDownSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_volumeDown)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_volumeDown)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_volumeDown, mark, depth + 1);
		if (SF_mindustry_gen_Icon_volumeUpSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_volumeUpSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_volumeUpSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_volumeUp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_volumeUp)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_volumeUp, mark, depth + 1);
		if (SF_mindustry_gen_Icon_tagSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_tagSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_tagSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_tag)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_tag)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_tag, mark, depth + 1);
		if (SF_mindustry_gen_Icon_tagsSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_tagsSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_tagsSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_tags)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_tags)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_tags, mark, depth + 1);
		if (SF_mindustry_gen_Icon_battery4Small)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_battery4Small)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_battery4Small, mark, depth + 1);
		if (SF_mindustry_gen_Icon_battery4)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_battery4)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_battery4, mark, depth + 1);
		if (SF_mindustry_gen_Icon_battery3Small)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_battery3Small)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_battery3Small, mark, depth + 1);
		if (SF_mindustry_gen_Icon_battery3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_battery3)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_battery3, mark, depth + 1);
		if (SF_mindustry_gen_Icon_battery2Small)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_battery2Small)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_battery2Small, mark, depth + 1);
		if (SF_mindustry_gen_Icon_battery2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_battery2)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_battery2, mark, depth + 1);
		if (SF_mindustry_gen_Icon_battery1Small)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_battery1Small)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_battery1Small, mark, depth + 1);
		if (SF_mindustry_gen_Icon_battery1)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_battery1)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_battery1, mark, depth + 1);
		if (SF_mindustry_gen_Icon_battery0Small)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_battery0Small)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_battery0Small, mark, depth + 1);
		if (SF_mindustry_gen_Icon_battery0)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_battery0)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_battery0, mark, depth + 1);
		if (SF_mindustry_gen_Icon_fileCodeSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_fileCodeSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_fileCodeSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_fileCode)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_fileCode)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_fileCode, mark, depth + 1);
		if (SF_mindustry_gen_Icon_fileVideoSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_fileVideoSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_fileVideoSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_fileVideo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_fileVideo)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_fileVideo, mark, depth + 1);
		if (SF_mindustry_gen_Icon_fileArchiveSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_fileArchiveSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_fileArchiveSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_fileArchive)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_fileArchive)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_fileArchive, mark, depth + 1);
		if (SF_mindustry_gen_Icon_folderOpenSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_folderOpenSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_folderOpenSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_folderOpen)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_folderOpen)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_folderOpen, mark, depth + 1);
		if (SF_mindustry_gen_Icon_folderEmptySmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_folderEmptySmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_folderEmptySmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_folderEmpty)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_folderEmpty)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_folderEmpty, mark, depth + 1);
		if (SF_mindustry_gen_Icon_folderOpenEmptySmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_folderOpenEmptySmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_folderOpenEmptySmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_folderOpenEmpty)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_folderOpenEmpty)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_folderOpenEmpty, mark, depth + 1);
		if (SF_mindustry_gen_Icon_inboxSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_inboxSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_inboxSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_inbox)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_inbox)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_inbox, mark, depth + 1);
		if (SF_mindustry_gen_Icon_sitemapSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_sitemapSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_sitemapSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_sitemap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_sitemap)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_sitemap, mark, depth + 1);
		if (SF_mindustry_gen_Icon_cloudSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_cloudSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_cloudSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_cloud)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_cloud)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_cloud, mark, depth + 1);
		if (SF_mindustry_gen_Icon_uploadCloudSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_uploadCloudSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_uploadCloudSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_uploadCloud)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_uploadCloud)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_uploadCloud, mark, depth + 1);
		if (SF_mindustry_gen_Icon_downloadCloudSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_downloadCloudSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_downloadCloudSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_downloadCloud)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_downloadCloud)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_downloadCloud, mark, depth + 1);
		if (SF_mindustry_gen_Icon_rainSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_rainSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_rainSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_rain)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_rain)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_rain, mark, depth + 1);
		if (SF_mindustry_gen_Icon_cloudSunSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_cloudSunSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_cloudSunSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_cloudSun)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_cloudSun)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_cloudSun, mark, depth + 1);
		if (SF_mindustry_gen_Icon_drizzleSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_drizzleSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_drizzleSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_drizzle)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_drizzle)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_drizzle, mark, depth + 1);
		if (SF_mindustry_gen_Icon_cloudFlashSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_cloudFlashSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_cloudFlashSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_cloudFlash)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_cloudFlash)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_cloudFlash, mark, depth + 1);
		if (SF_mindustry_gen_Icon_cloudWindSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_cloudWindSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_cloudWindSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_cloudWind)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_cloudWind)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_cloudWind, mark, depth + 1);
		if (SF_mindustry_gen_Icon_boxSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_boxSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_boxSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_box)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_box)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_box, mark, depth + 1);
		if (SF_mindustry_gen_Icon_chartAltSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_chartAltSmall)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_chartAltSmall, mark, depth + 1);
		if (SF_mindustry_gen_Icon_chartAlt)
			((gc_mark_ptr) ((jclass) ((jobject) SF_mindustry_gen_Icon_chartAlt)->clazz)->markFunction)((jobject) SF_mindustry_gen_Icon_chartAlt, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (mindustry_gen_Icon *) object;
}

void init_mindustry_gen_Icon(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Icon:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Icon(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_mindustry_gen_Icon_load(jcontext ctx) {
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Icon:load", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Icon(ctx);
	{
	LINE_NUMBER(563);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61788)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_fileTextFillSmall = sp[0].o;
	LINE_NUMBER(564);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61788)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_fileTextFill = sp[0].o;
	LINE_NUMBER(565);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fileTextFill"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_fileTextFill;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(566);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fileTextFillSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_fileTextFillSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(567);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61787)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_fileSmall = sp[0].o;
	LINE_NUMBER(568);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61787)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_file = sp[0].o;
	LINE_NUMBER(569);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"file"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_file;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(570);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fileSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_fileSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(571);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61686)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_fileTextSmall = sp[0].o;
	LINE_NUMBER(572);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61686)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_fileText = sp[0].o;
	LINE_NUMBER(573);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fileText"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_fileText;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(574);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fileTextSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_fileTextSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(575);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59394)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_leftSmall = sp[0].o;
	LINE_NUMBER(576);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59394)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_left = sp[0].o;
	LINE_NUMBER(577);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"left"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_left;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(578);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"leftSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_leftSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(579);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59395)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_rightSmall = sp[0].o;
	LINE_NUMBER(580);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59395)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_right = sp[0].o;
	LINE_NUMBER(581);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"right"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_right;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(582);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"rightSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_rightSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(583);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59396)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_upSmall = sp[0].o;
	LINE_NUMBER(584);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59396)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_up = sp[0].o;
	LINE_NUMBER(585);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"up"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_up;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(586);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"upSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_upSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(587);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59397)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_downSmall = sp[0].o;
	LINE_NUMBER(588);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59397)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_down = sp[0].o;
	LINE_NUMBER(589);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"down"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_down;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(590);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"downSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_downSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(591);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59399)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_homeSmall = sp[0].o;
	LINE_NUMBER(592);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59399)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_home = sp[0].o;
	LINE_NUMBER(593);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"home"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_home;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(594);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"homeSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_homeSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(595);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59392)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_okSmall = sp[0].o;
	LINE_NUMBER(596);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59392)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_ok = sp[0].o;
	LINE_NUMBER(597);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"ok"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_ok;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(598);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"okSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_okSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(599);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59400)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_imageSmall = sp[0].o;
	LINE_NUMBER(600);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59400)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_image = sp[0].o;
	LINE_NUMBER(601);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"image"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_image;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(602);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"imageSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_imageSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(603);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59401)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_starSmall = sp[0].o;
	LINE_NUMBER(604);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59401)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_star = sp[0].o;
	LINE_NUMBER(605);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"star"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_star;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(606);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"starSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_starSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(607);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59403)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_resizeSmall = sp[0].o;
	LINE_NUMBER(608);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59403)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_resize = sp[0].o;
	LINE_NUMBER(609);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"resize"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_resize;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(610);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"resizeSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_resizeSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(611);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59407)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_wrenchSmall = sp[0].o;
	LINE_NUMBER(612);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59407)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_wrench = sp[0].o;
	LINE_NUMBER(613);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"wrench"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_wrench;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(614);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"wrenchSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_wrenchSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(615);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(62208)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_githubSquareSmall = sp[0].o;
	LINE_NUMBER(616);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(62208)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_githubSquare = sp[0].o;
	LINE_NUMBER(617);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"githubSquare"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_githubSquare;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(618);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"githubSquareSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_githubSquareSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(619);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61893)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_fileImageSmall = sp[0].o;
	LINE_NUMBER(620);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61893)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_fileImage = sp[0].o;
	LINE_NUMBER(621);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fileImage"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_fileImage;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(622);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fileImageSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_fileImageSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(623);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59411)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_addSmall = sp[0].o;
	LINE_NUMBER(624);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59411)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_add = sp[0].o;
	LINE_NUMBER(625);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"add"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_add;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(626);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"addSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_addSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(627);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59414)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_editSmall = sp[0].o;
	LINE_NUMBER(628);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59414)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_edit = sp[0].o;
	LINE_NUMBER(629);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"edit"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_edit;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(630);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"editSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_editSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(631);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59417)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_chartBarSmall = sp[0].o;
	LINE_NUMBER(632);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59417)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_chartBar = sp[0].o;
	LINE_NUMBER(633);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"chartBar"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_chartBar;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(634);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"chartBarSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_chartBarSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(635);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59418)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_planeOutlineSmall = sp[0].o;
	LINE_NUMBER(636);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59418)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_planeOutline = sp[0].o;
	LINE_NUMBER(637);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"planeOutline"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_planeOutline;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(638);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"planeOutlineSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_planeOutlineSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(639);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61616)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_filterSmall = sp[0].o;
	LINE_NUMBER(640);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61616)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_filter = sp[0].o;
	LINE_NUMBER(641);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"filter"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_filter;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(642);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"filterSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_filterSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(643);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59421)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_folderSmall = sp[0].o;
	LINE_NUMBER(644);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59421)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_folder = sp[0].o;
	LINE_NUMBER(645);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"folder"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_folder;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(646);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"folderSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_folderSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(647);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59426)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_steamSmall = sp[0].o;
	LINE_NUMBER(648);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59426)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_steam = sp[0].o;
	LINE_NUMBER(649);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"steam"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_steam;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(650);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"steamSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_steamSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(651);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59428)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_downOpenSmall = sp[0].o;
	LINE_NUMBER(652);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59428)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_downOpen = sp[0].o;
	LINE_NUMBER(653);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"downOpen"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_downOpen;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(654);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"downOpenSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_downOpenSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(655);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59429)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_leftOpenSmall = sp[0].o;
	LINE_NUMBER(656);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59429)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_leftOpen = sp[0].o;
	LINE_NUMBER(657);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"leftOpen"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_leftOpen;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(658);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"leftOpenSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_leftOpenSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(659);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59430)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_upOpenSmall = sp[0].o;
	LINE_NUMBER(660);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59430)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_upOpen = sp[0].o;
	LINE_NUMBER(661);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"upOpen"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_upOpen;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(662);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"upOpenSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_upOpenSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(663);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59431)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_mapSmall = sp[0].o;
	LINE_NUMBER(664);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59431)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_map = sp[0].o;
	LINE_NUMBER(665);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"map"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_map;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(666);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"mapSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_mapSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(667);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59427)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_rotateSmall = sp[0].o;
	LINE_NUMBER(668);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59427)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_rotate = sp[0].o;
	LINE_NUMBER(669);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"rotate"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_rotate;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(670);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"rotateSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_rotateSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(671);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59433)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_playSmall = sp[0].o;
	LINE_NUMBER(672);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59433)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_play = sp[0].o;
	LINE_NUMBER(673);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"play"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_play;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(674);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"playSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_playSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(675);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59398)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_pauseSmall = sp[0].o;
	LINE_NUMBER(676);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59398)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_pause = sp[0].o;
	LINE_NUMBER(677);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pause"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_pause;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(678);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pauseSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_pauseSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(679);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59409)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_listSmall = sp[0].o;
	LINE_NUMBER(680);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59409)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_list = sp[0].o;
	LINE_NUMBER(681);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"list"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_list;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(682);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"listSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_listSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(683);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59413)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_cancelSmall = sp[0].o;
	LINE_NUMBER(684);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59413)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_cancel = sp[0].o;
	LINE_NUMBER(685);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"cancel"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_cancel;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(686);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"cancelSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_cancelSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(687);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59416)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_moveSmall = sp[0].o;
	LINE_NUMBER(688);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59416)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_move = sp[0].o;
	LINE_NUMBER(689);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"move"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_move;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(690);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"moveSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_moveSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(691);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61728)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_terminalSmall = sp[0].o;
	LINE_NUMBER(692);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61728)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_terminal = sp[0].o;
	LINE_NUMBER(693);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"terminal"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_terminal;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(694);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"terminalSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_terminalSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(695);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59445)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_undoSmall = sp[0].o;
	LINE_NUMBER(696);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59445)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_undo = sp[0].o;
	LINE_NUMBER(697);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"undo"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_undo;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(698);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"undoSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_undoSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(699);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59446)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_redoSmall = sp[0].o;
	LINE_NUMBER(700);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59446)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_redo = sp[0].o;
	LINE_NUMBER(701);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"redo"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_redo;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(702);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"redoSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_redoSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(703);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61737)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_infoSmall = sp[0].o;
	LINE_NUMBER(704);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61737)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_info = sp[0].o;
	LINE_NUMBER(705);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"info"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_info;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(706);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"infoSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_infoSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(707);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59447)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_infoCircleSmall = sp[0].o;
	LINE_NUMBER(708);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59447)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_infoCircle = sp[0].o;
	LINE_NUMBER(709);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"infoCircle"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_infoCircle;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(710);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"infoCircleSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_infoCircleSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(711);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59449)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_rightOpenOutSmall = sp[0].o;
	LINE_NUMBER(712);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59449)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_rightOpenOut = sp[0].o;
	LINE_NUMBER(713);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"rightOpenOut"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_rightOpenOut;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(714);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"rightOpenOutSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_rightOpenOutSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(715);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59450)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_rightOpenSmall = sp[0].o;
	LINE_NUMBER(716);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59450)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_rightOpen = sp[0].o;
	LINE_NUMBER(717);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"rightOpen"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_rightOpen;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(718);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"rightOpenSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_rightOpenSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(719);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59451)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_wavesSmall = sp[0].o;
	LINE_NUMBER(720);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59451)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_waves = sp[0].o;
	LINE_NUMBER(721);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"waves"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_waves;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(722);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"wavesSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_wavesSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(723);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59454)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_filtersSmall = sp[0].o;
	LINE_NUMBER(724);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59454)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_filters = sp[0].o;
	LINE_NUMBER(725);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"filters"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_filters;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(726);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"filtersSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_filtersSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(727);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59455)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_layersSmall = sp[0].o;
	LINE_NUMBER(728);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59455)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_layers = sp[0].o;
	LINE_NUMBER(729);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"layers"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_layers;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(730);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"layersSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_layersSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(731);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61741)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_eraserSmall = sp[0].o;
	LINE_NUMBER(732);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61741)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_eraser = sp[0].o;
	LINE_NUMBER(733);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"eraser"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_eraser;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(734);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"eraserSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_eraserSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(735);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59393)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_bookOpenSmall = sp[0].o;
	LINE_NUMBER(736);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59393)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_bookOpen = sp[0].o;
	LINE_NUMBER(737);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bookOpen"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_bookOpen;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(738);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bookOpenSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_bookOpenSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(739);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61481)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_gridSmall = sp[0].o;
	LINE_NUMBER(740);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61481)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_grid = sp[0].o;
	LINE_NUMBER(741);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"grid"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_grid;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(742);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"gridSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_gridSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(743);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59410)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_flipXSmall = sp[0].o;
	LINE_NUMBER(744);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59410)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_flipX = sp[0].o;
	LINE_NUMBER(745);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"flipX"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_flipX;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(746);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"flipXSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_flipXSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(747);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59458)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_flipYSmall = sp[0].o;
	LINE_NUMBER(748);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59458)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_flipY = sp[0].o;
	LINE_NUMBER(749);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"flipY"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_flipY;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(750);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"flipYSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_flipYSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(751);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59460)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_diagonalSmall = sp[0].o;
	LINE_NUMBER(752);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59460)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_diagonal = sp[0].o;
	LINE_NUMBER(753);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"diagonal"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_diagonal;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(754);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"diagonalSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_diagonalSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(755);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59405)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_discordSmall = sp[0].o;
	LINE_NUMBER(756);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59405)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_discord = sp[0].o;
	LINE_NUMBER(757);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"discord"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_discord;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(758);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"discordSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_discordSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(759);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(62081)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_redditAlienSmall = sp[0].o;
	LINE_NUMBER(760);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(62081)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_redditAlien = sp[0].o;
	LINE_NUMBER(761);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"redditAlien"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_redditAlien;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(762);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"redditAlienSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_redditAlienSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(763);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(62216)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_githubSmall = sp[0].o;
	LINE_NUMBER(764);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(62216)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_github = sp[0].o;
	LINE_NUMBER(765);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"github"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_github;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(766);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"githubSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_githubSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(767);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59453)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_googleplaySmall = sp[0].o;
	LINE_NUMBER(768);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59453)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_googleplay = sp[0].o;
	LINE_NUMBER(769);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"googleplay"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_googleplay;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(770);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"googleplaySmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_googleplaySmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(771);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59461)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_androidSmall = sp[0].o;
	LINE_NUMBER(772);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59461)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_android = sp[0].o;
	LINE_NUMBER(773);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"android"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_android;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(774);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"androidSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_androidSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(775);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61825)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_trelloSmall = sp[0].o;
	LINE_NUMBER(776);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61825)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_trello = sp[0].o;
	LINE_NUMBER(777);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"trello"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_trello;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(778);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"trelloSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_trelloSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(779);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59406)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_logicSmall = sp[0].o;
	LINE_NUMBER(780);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59406)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_logic = sp[0].o;
	LINE_NUMBER(781);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"logic"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_logic;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(782);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"logicSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_logicSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(783);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59412)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_distributionSmall = sp[0].o;
	LINE_NUMBER(784);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59412)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_distribution = sp[0].o;
	LINE_NUMBER(785);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"distribution"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_distribution;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(786);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"distributionSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_distributionSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(787);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59415)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_hammerSmall = sp[0].o;
	LINE_NUMBER(788);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59415)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_hammer = sp[0].o;
	LINE_NUMBER(789);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"hammer"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_hammer;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(790);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"hammerSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_hammerSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(791);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59419)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_saveSmall = sp[0].o;
	LINE_NUMBER(792);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59419)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_save = sp[0].o;
	LINE_NUMBER(793);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"save"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_save;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(794);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"saveSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_saveSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(795);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59420)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_linkSmall = sp[0].o;
	LINE_NUMBER(796);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59420)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_link = sp[0].o;
	LINE_NUMBER(797);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"link"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_link;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(798);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"linkSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_linkSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(799);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59434)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_itchioSmall = sp[0].o;
	LINE_NUMBER(800);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59434)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_itchio = sp[0].o;
	LINE_NUMBER(801);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"itchio"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_itchio;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(802);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"itchioSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_itchioSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(803);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59435)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_lineSmall = sp[0].o;
	LINE_NUMBER(804);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59435)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_line = sp[0].o;
	LINE_NUMBER(805);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"line"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_line;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(806);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lineSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_lineSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(807);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59436)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_adminSmall = sp[0].o;
	LINE_NUMBER(808);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59436)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_admin = sp[0].o;
	LINE_NUMBER(809);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"admin"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_admin;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(810);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"adminSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_adminSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(811);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59437)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_spray1Small = sp[0].o;
	LINE_NUMBER(812);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59437)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_spray1 = sp[0].o;
	LINE_NUMBER(813);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"spray1"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_spray1;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(814);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"spray1Small"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_spray1Small;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(815);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59440)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_craftingSmall = sp[0].o;
	LINE_NUMBER(816);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59440)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_crafting = sp[0].o;
	LINE_NUMBER(817);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"crafting"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_crafting;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(818);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"craftingSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_craftingSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(819);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59468)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_fillSmall = sp[0].o;
	LINE_NUMBER(820);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59468)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_fill = sp[0].o;
	LINE_NUMBER(821);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fill"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_fill;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(822);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fillSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_fillSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(823);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59474)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_pasteSmall = sp[0].o;
	LINE_NUMBER(824);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59474)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_paste = sp[0].o;
	LINE_NUMBER(825);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"paste"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_paste;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(826);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pasteSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_pasteSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(827);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59475)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_effectSmall = sp[0].o;
	LINE_NUMBER(828);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59475)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_effect = sp[0].o;
	LINE_NUMBER(829);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"effect"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_effect;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(830);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"effectSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_effectSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(831);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59483)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_bookSmall = sp[0].o;
	LINE_NUMBER(832);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59483)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_book = sp[0].o;
	LINE_NUMBER(833);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"book"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_book;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(834);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bookSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_bookSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(835);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59484)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_liquidSmall = sp[0].o;
	LINE_NUMBER(836);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59484)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_liquid = sp[0].o;
	LINE_NUMBER(837);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"liquid"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_liquid;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(838);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"liquidSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_liquidSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(839);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59485)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_hostSmall = sp[0].o;
	LINE_NUMBER(840);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59485)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_host = sp[0].o;
	LINE_NUMBER(841);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"host"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_host;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(842);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"hostSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_hostSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(843);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59486)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_productionSmall = sp[0].o;
	LINE_NUMBER(844);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59486)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_production = sp[0].o;
	LINE_NUMBER(845);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"production"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_production;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(846);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"productionSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_productionSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(847);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59487)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_exitSmall = sp[0].o;
	LINE_NUMBER(848);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59487)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_exit = sp[0].o;
	LINE_NUMBER(849);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"exit"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_exit;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(850);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"exitSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_exitSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(851);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59489)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_modePvpSmall = sp[0].o;
	LINE_NUMBER(852);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59489)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_modePvp = sp[0].o;
	LINE_NUMBER(853);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"modePvp"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_modePvp;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(854);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"modePvpSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_modePvpSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(855);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59493)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_modeAttackSmall = sp[0].o;
	LINE_NUMBER(856);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59493)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_modeAttack = sp[0].o;
	LINE_NUMBER(857);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"modeAttack"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_modeAttack;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(858);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"modeAttackSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_modeAttackSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(859);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59495)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_refresh1Small = sp[0].o;
	LINE_NUMBER(860);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59495)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_refresh1 = sp[0].o;
	LINE_NUMBER(861);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"refresh1"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_refresh1;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(862);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"refresh1Small"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_refresh1Small;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(863);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59496)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_noneSmall = sp[0].o;
	LINE_NUMBER(864);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59496)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_none = sp[0].o;
	LINE_NUMBER(865);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"none"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_none;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(866);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"noneSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_noneSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(867);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59497)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_pencilSmall = sp[0].o;
	LINE_NUMBER(868);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59497)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_pencil = sp[0].o;
	LINE_NUMBER(869);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pencil"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_pencil;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(870);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pencilSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_pencilSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(871);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59498)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_refreshSmall = sp[0].o;
	LINE_NUMBER(872);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59498)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_refresh = sp[0].o;
	LINE_NUMBER(873);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"refresh"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_refresh;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(874);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"refreshSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_refreshSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(875);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59499)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_modeSurvivalSmall = sp[0].o;
	LINE_NUMBER(876);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59499)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_modeSurvival = sp[0].o;
	LINE_NUMBER(877);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"modeSurvival"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_modeSurvival;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(878);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"modeSurvivalSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_modeSurvivalSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(879);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59500)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_commandRallySmall = sp[0].o;
	LINE_NUMBER(880);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59500)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_commandRally = sp[0].o;
	LINE_NUMBER(881);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"commandRally"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_commandRally;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(882);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"commandRallySmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_commandRallySmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(883);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59501)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_unitsSmall = sp[0].o;
	LINE_NUMBER(884);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59501)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_units = sp[0].o;
	LINE_NUMBER(885);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"units"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_units;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(886);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"unitsSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_unitsSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(887);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59502)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_commandAttackSmall = sp[0].o;
	LINE_NUMBER(888);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59502)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_commandAttack = sp[0].o;
	LINE_NUMBER(889);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"commandAttack"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_commandAttack;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(890);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"commandAttackSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_commandAttackSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(891);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59503)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_trashSmall = sp[0].o;
	LINE_NUMBER(892);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59503)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_trash = sp[0].o;
	LINE_NUMBER(893);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"trash"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_trash;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(894);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"trashSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_trashSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(895);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59504)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_chatSmall = sp[0].o;
	LINE_NUMBER(896);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59504)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_chat = sp[0].o;
	LINE_NUMBER(897);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"chat"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_chat;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(898);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"chatSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_chatSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(899);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59505)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_turretSmall = sp[0].o;
	LINE_NUMBER(900);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59505)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_turret = sp[0].o;
	LINE_NUMBER(901);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"turret"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_turret;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(902);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"turretSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_turretSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(903);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59506)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_playersSmall = sp[0].o;
	LINE_NUMBER(904);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59506)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_players = sp[0].o;
	LINE_NUMBER(905);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"players"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_players;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(906);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"playersSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_playersSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(907);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59507)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_editorSmall = sp[0].o;
	LINE_NUMBER(908);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59507)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_editor = sp[0].o;
	LINE_NUMBER(909);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"editor"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_editor;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(910);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"editorSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_editorSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(911);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59508)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_copySmall = sp[0].o;
	LINE_NUMBER(912);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59508)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_copy = sp[0].o;
	LINE_NUMBER(913);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"copy"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_copy;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(914);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"copySmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_copySmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(915);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59509)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_treeSmall = sp[0].o;
	LINE_NUMBER(916);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59509)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_tree = sp[0].o;
	LINE_NUMBER(917);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"tree"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_tree;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(918);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"treeSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_treeSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(919);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59510)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_lockOpenSmall = sp[0].o;
	LINE_NUMBER(920);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59510)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_lockOpen = sp[0].o;
	LINE_NUMBER(921);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lockOpen"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_lockOpen;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(922);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lockOpenSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_lockOpenSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(923);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59511)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_pickSmall = sp[0].o;
	LINE_NUMBER(924);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59511)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_pick = sp[0].o;
	LINE_NUMBER(925);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pick"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_pick;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(926);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pickSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_pickSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(927);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59512)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_exportSmall = sp[0].o;
	LINE_NUMBER(928);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59512)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_export = sp[0].o;
	LINE_NUMBER(929);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"export"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_export;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(930);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"exportSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_exportSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(931);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59513)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_downloadSmall = sp[0].o;
	LINE_NUMBER(932);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59513)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_download = sp[0].o;
	LINE_NUMBER(933);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"download"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_download;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(934);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"downloadSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_downloadSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(935);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59515)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_uploadSmall = sp[0].o;
	LINE_NUMBER(936);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59515)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_upload = sp[0].o;
	LINE_NUMBER(937);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"upload"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_upload;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(938);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"uploadSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_uploadSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(939);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59516)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_settingsSmall = sp[0].o;
	LINE_NUMBER(940);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59516)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_settings = sp[0].o;
	LINE_NUMBER(941);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"settings"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_settings;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(942);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"settingsSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_settingsSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(943);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59517)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_spraySmall = sp[0].o;
	LINE_NUMBER(944);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59517)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_spray = sp[0].o;
	LINE_NUMBER(945);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"spray"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_spray;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(946);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"spraySmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_spraySmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(947);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59530)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_zoomSmall = sp[0].o;
	LINE_NUMBER(948);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59530)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_zoom = sp[0].o;
	LINE_NUMBER(949);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"zoom"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_zoom;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(950);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"zoomSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_zoomSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(951);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59531)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_powerOldSmall = sp[0].o;
	LINE_NUMBER(952);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59531)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_powerOld = sp[0].o;
	LINE_NUMBER(953);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"powerOld"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_powerOld;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(954);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"powerOldSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_powerOldSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(955);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59408)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_powerSmall = sp[0].o;
	LINE_NUMBER(956);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59408)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_power = sp[0].o;
	LINE_NUMBER(957);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"power"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_power;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(958);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"powerSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_powerSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(959);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59532)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_menuSmall = sp[0].o;
	LINE_NUMBER(960);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59532)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_menu = sp[0].o;
	LINE_NUMBER(961);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"menu"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_menu;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(962);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"menuSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_menuSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(963);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59533)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_lockSmall = sp[0].o;
	LINE_NUMBER(964);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59533)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_lock = sp[0].o;
	LINE_NUMBER(965);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lock"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_lock;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(966);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"lockSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_lockSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(967);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59534)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_eyeSmall = sp[0].o;
	LINE_NUMBER(968);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59534)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_eye = sp[0].o;
	LINE_NUMBER(969);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"eye"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_eye;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(970);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"eyeSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_eyeSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(971);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59535)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_eyeOffSmall = sp[0].o;
	LINE_NUMBER(972);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59535)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_eyeOff = sp[0].o;
	LINE_NUMBER(973);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"eyeOff"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_eyeOff;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(974);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"eyeOffSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_eyeOffSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(975);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (9888));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_warningSmall = sp[0].o;
	LINE_NUMBER(976);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (9888));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_warning = sp[0].o;
	LINE_NUMBER(977);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"warning"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_warning;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(978);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"warningSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_warningSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(979);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59492)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_terrainSmall = sp[0].o;
	LINE_NUMBER(980);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59492)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_terrain = sp[0].o;
	LINE_NUMBER(981);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"terrain"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_terrain;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(982);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"terrainSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_terrainSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(983);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59469)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_defenseSmall = sp[0].o;
	LINE_NUMBER(984);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59469)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_defense = sp[0].o;
	LINE_NUMBER(985);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"defense"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_defense;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(986);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"defenseSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_defenseSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(987);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59443)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_planetSmall = sp[0].o;
	LINE_NUMBER(988);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59443)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_planet = sp[0].o;
	LINE_NUMBER(989);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"planet"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_planet;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(990);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"planetSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_planetSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(991);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59444)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_arrowNoteSmall = sp[0].o;
	LINE_NUMBER(992);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59444)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_arrowNote = sp[0].o;
	LINE_NUMBER(993);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"arrowNote"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_arrowNote;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(994);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"arrowNoteSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_arrowNoteSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(995);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59402)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_musicSmall = sp[0].o;
	LINE_NUMBER(996);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59402)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_music = sp[0].o;
	LINE_NUMBER(997);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"music"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_music;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(998);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"musicSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_musicSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(999);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61895)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_fileAudioSmall = sp[0].o;
	LINE_NUMBER(1000);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61895)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_fileAudio = sp[0].o;
	LINE_NUMBER(1001);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fileAudio"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_fileAudio;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1002);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fileAudioSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_fileAudioSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1003);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59404)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_volumeOffSmall = sp[0].o;
	LINE_NUMBER(1004);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59404)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_volumeOff = sp[0].o;
	LINE_NUMBER(1005);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"volumeOff"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_volumeOff;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1006);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"volumeOffSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_volumeOffSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1007);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59423)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_volumeDownSmall = sp[0].o;
	LINE_NUMBER(1008);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59423)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_volumeDown = sp[0].o;
	LINE_NUMBER(1009);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"volumeDown"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_volumeDown;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1010);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"volumeDownSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_volumeDownSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1011);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59424)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_volumeUpSmall = sp[0].o;
	LINE_NUMBER(1012);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59424)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_volumeUp = sp[0].o;
	LINE_NUMBER(1013);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"volumeUp"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_volumeUp;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1014);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"volumeUpSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_volumeUpSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1015);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59425)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_tagSmall = sp[0].o;
	LINE_NUMBER(1016);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59425)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_tag = sp[0].o;
	LINE_NUMBER(1017);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"tag"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_tag;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1018);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"tagSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_tagSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1019);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59432)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_tagsSmall = sp[0].o;
	LINE_NUMBER(1020);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59432)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_tags = sp[0].o;
	LINE_NUMBER(1021);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"tags"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_tags;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1022);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"tagsSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_tagsSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1023);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(62016)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_battery4Small = sp[0].o;
	LINE_NUMBER(1024);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(62016)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_battery4 = sp[0].o;
	LINE_NUMBER(1025);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"battery4"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_battery4;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1026);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"battery4Small"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_battery4Small;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1027);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(62017)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_battery3Small = sp[0].o;
	LINE_NUMBER(1028);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(62017)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_battery3 = sp[0].o;
	LINE_NUMBER(1029);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"battery3"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_battery3;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1030);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"battery3Small"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_battery3Small;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1031);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(62018)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_battery2Small = sp[0].o;
	LINE_NUMBER(1032);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(62018)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_battery2 = sp[0].o;
	LINE_NUMBER(1033);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"battery2"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_battery2;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1034);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"battery2Small"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_battery2Small;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1035);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(62019)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_battery1Small = sp[0].o;
	LINE_NUMBER(1036);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(62019)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_battery1 = sp[0].o;
	LINE_NUMBER(1037);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"battery1"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_battery1;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1038);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"battery1Small"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_battery1Small;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1039);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(62020)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_battery0Small = sp[0].o;
	LINE_NUMBER(1040);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(62020)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_battery0 = sp[0].o;
	LINE_NUMBER(1041);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"battery0"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_battery0;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1042);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"battery0Small"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_battery0Small;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1043);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61897)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_fileCodeSmall = sp[0].o;
	LINE_NUMBER(1044);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61897)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_fileCode = sp[0].o;
	LINE_NUMBER(1045);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fileCode"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_fileCode;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1046);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fileCodeSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_fileCodeSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1047);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61896)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_fileVideoSmall = sp[0].o;
	LINE_NUMBER(1048);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61896)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_fileVideo = sp[0].o;
	LINE_NUMBER(1049);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fileVideo"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_fileVideo;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1050);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fileVideoSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_fileVideoSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1051);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61894)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_fileArchiveSmall = sp[0].o;
	LINE_NUMBER(1052);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61894)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_fileArchive = sp[0].o;
	LINE_NUMBER(1053);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fileArchive"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_fileArchive;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1054);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"fileArchiveSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_fileArchiveSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1055);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59438)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_folderOpenSmall = sp[0].o;
	LINE_NUMBER(1056);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59438)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_folderOpen = sp[0].o;
	LINE_NUMBER(1057);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"folderOpen"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_folderOpen;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1058);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"folderOpenSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_folderOpenSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1059);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61716)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_folderEmptySmall = sp[0].o;
	LINE_NUMBER(1060);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61716)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_folderEmpty = sp[0].o;
	LINE_NUMBER(1061);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"folderEmpty"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_folderEmpty;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1062);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"folderEmptySmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_folderEmptySmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1063);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61717)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_folderOpenEmptySmall = sp[0].o;
	LINE_NUMBER(1064);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61717)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_folderOpenEmpty = sp[0].o;
	LINE_NUMBER(1065);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"folderOpenEmpty"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_folderOpenEmpty;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1066);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"folderOpenEmptySmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_folderOpenEmptySmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1067);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59439)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_inboxSmall = sp[0].o;
	LINE_NUMBER(1068);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59439)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_inbox = sp[0].o;
	LINE_NUMBER(1069);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"inbox"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_inbox;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1070);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"inboxSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_inboxSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1071);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61672)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_sitemapSmall = sp[0].o;
	LINE_NUMBER(1072);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61672)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_sitemap = sp[0].o;
	LINE_NUMBER(1073);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"sitemap"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_sitemap;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1074);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"sitemapSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_sitemapSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1075);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59441)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_cloudSmall = sp[0].o;
	LINE_NUMBER(1076);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59441)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_cloud = sp[0].o;
	LINE_NUMBER(1077);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"cloud"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_cloud;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1078);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"cloudSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_cloudSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1079);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61678)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_uploadCloudSmall = sp[0].o;
	LINE_NUMBER(1080);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61678)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_uploadCloud = sp[0].o;
	LINE_NUMBER(1081);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"uploadCloud"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_uploadCloud;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1082);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"uploadCloudSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_uploadCloudSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1083);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61677)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_downloadCloudSmall = sp[0].o;
	LINE_NUMBER(1084);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(61677)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_downloadCloud = sp[0].o;
	LINE_NUMBER(1085);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"downloadCloud"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_downloadCloud;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1086);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"downloadCloudSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_downloadCloudSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1087);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59442)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_rainSmall = sp[0].o;
	LINE_NUMBER(1088);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59442)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_rain = sp[0].o;
	LINE_NUMBER(1089);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"rain"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_rain;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1090);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"rainSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_rainSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1091);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59448)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_cloudSunSmall = sp[0].o;
	LINE_NUMBER(1092);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59448)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_cloudSun = sp[0].o;
	LINE_NUMBER(1093);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"cloudSun"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_cloudSun;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1094);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"cloudSunSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_cloudSunSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1095);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59452)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_drizzleSmall = sp[0].o;
	LINE_NUMBER(1096);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59452)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_drizzle = sp[0].o;
	LINE_NUMBER(1097);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"drizzle"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_drizzle;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1098);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"drizzleSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_drizzleSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1099);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59456)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_cloudFlashSmall = sp[0].o;
	LINE_NUMBER(1100);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59456)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_cloudFlash = sp[0].o;
	LINE_NUMBER(1101);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"cloudFlash"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_cloudFlash;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1102);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"cloudFlashSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_cloudFlashSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1103);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59457)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_cloudWindSmall = sp[0].o;
	LINE_NUMBER(1104);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59457)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_cloudWind = sp[0].o;
	LINE_NUMBER(1105);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"cloudWind"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_cloudWind;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1106);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"cloudWindSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_cloudWindSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1107);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59422)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_boxSmall = sp[0].o;
	LINE_NUMBER(1108);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59422)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_box = sp[0].o;
	LINE_NUMBER(1109);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"box"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_box;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1110);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"boxSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_boxSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1111);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_def;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59459)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_chartAltSmall = sp[0].o;
	LINE_NUMBER(1112);
	clinit_mindustry_ui_Fonts(ctx);
	sp[0].o = (jobject)SF_mindustry_ui_Fonts_icon;
	sp[0].o = (jobject)SM_mindustry_ui_Fonts_getGlyph_arc_graphics_g2d_Font_char_R_arc_scene_style_TextureRegionDrawable(ctx, sp[0].o, (jint(59459)));
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_chartAlt = sp[0].o;
	LINE_NUMBER(1113);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"chartAlt"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_chartAlt;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1114);
	clinit_mindustry_gen_Icon(ctx);
	sp[0].o = (jobject)SF_mindustry_gen_Icon_icons;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"chartAltSmall"_j));
	clinit_mindustry_gen_Icon(ctx);
	sp[2].o = (jobject)SF_mindustry_gen_Icon_chartAltSmall;
	sp[0].o = (jobject)((func_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_arc_struct_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_mindustry_gen_Icon(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "mindustry/gen/Icon:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_mindustry_gen_Icon(ctx);
	{
	LINE_NUMBER(8);
	clinit_arc_struct_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_arc_struct_ObjectMap);
	init_arc_struct_ObjectMap(ctx, sp[0].o);
	clinit_mindustry_gen_Icon(ctx);
	SF_mindustry_gen_Icon_icons = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_mindustry_gen_Icon[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
};

static FieldMetadata fields[] {
	{ "icons", &class_arc_struct_ObjectMap, (intptr_t) &SF_mindustry_gen_Icon_icons, "Larc/struct/ObjectMap;", 25 },
	{ "fileTextFillSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_fileTextFillSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "fileTextFill", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_fileTextFill, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "fileSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_fileSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "file", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_file, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "fileTextSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_fileTextSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "fileText", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_fileText, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "leftSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_leftSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "left", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_left, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "rightSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_rightSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "right", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_right, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "upSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_upSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "up", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_up, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "downSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_downSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "down", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_down, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "homeSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_homeSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "home", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_home, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "okSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_okSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "ok", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_ok, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "imageSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_imageSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "image", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_image, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "starSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_starSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "star", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_star, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "resizeSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_resizeSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "resize", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_resize, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "wrenchSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_wrenchSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "wrench", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_wrench, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "githubSquareSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_githubSquareSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "githubSquare", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_githubSquare, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "fileImageSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_fileImageSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "fileImage", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_fileImage, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "addSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_addSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "add", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_add, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "editSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_editSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "edit", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_edit, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "chartBarSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_chartBarSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "chartBar", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_chartBar, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "planeOutlineSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_planeOutlineSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "planeOutline", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_planeOutline, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "filterSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_filterSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "filter", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_filter, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "folderSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_folderSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "folder", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_folder, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "steamSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_steamSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "steam", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_steam, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "downOpenSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_downOpenSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "downOpen", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_downOpen, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "leftOpenSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_leftOpenSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "leftOpen", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_leftOpen, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "upOpenSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_upOpenSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "upOpen", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_upOpen, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "mapSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_mapSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "map", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_map, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "rotateSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_rotateSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "rotate", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_rotate, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "playSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_playSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "play", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_play, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "pauseSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_pauseSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "pause", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_pause, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "listSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_listSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "list", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_list, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "cancelSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_cancelSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "cancel", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_cancel, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "moveSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_moveSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "move", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_move, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "terminalSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_terminalSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "terminal", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_terminal, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "undoSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_undoSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "undo", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_undo, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "redoSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_redoSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "redo", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_redo, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "infoSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_infoSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "info", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_info, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "infoCircleSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_infoCircleSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "infoCircle", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_infoCircle, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "rightOpenOutSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_rightOpenOutSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "rightOpenOut", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_rightOpenOut, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "rightOpenSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_rightOpenSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "rightOpen", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_rightOpen, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "wavesSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_wavesSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "waves", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_waves, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "filtersSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_filtersSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "filters", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_filters, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "layersSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_layersSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "layers", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_layers, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "eraserSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_eraserSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "eraser", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_eraser, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "bookOpenSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_bookOpenSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "bookOpen", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_bookOpen, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "gridSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_gridSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "grid", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_grid, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "flipXSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_flipXSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "flipX", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_flipX, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "flipYSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_flipYSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "flipY", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_flipY, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "diagonalSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_diagonalSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "diagonal", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_diagonal, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "discordSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_discordSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "discord", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_discord, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "redditAlienSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_redditAlienSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "redditAlien", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_redditAlien, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "githubSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_githubSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "github", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_github, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "googleplaySmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_googleplaySmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "googleplay", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_googleplay, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "androidSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_androidSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "android", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_android, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "trelloSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_trelloSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "trello", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_trello, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "logicSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_logicSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "logic", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_logic, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "distributionSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_distributionSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "distribution", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_distribution, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "hammerSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_hammerSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "hammer", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_hammer, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "saveSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_saveSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "save", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_save, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "linkSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_linkSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "link", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_link, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "itchioSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_itchioSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "itchio", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_itchio, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "lineSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_lineSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "line", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_line, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "adminSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_adminSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "admin", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_admin, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "spray1Small", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_spray1Small, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "spray1", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_spray1, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "craftingSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_craftingSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "crafting", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_crafting, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "fillSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_fillSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "fill", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_fill, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "pasteSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_pasteSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "paste", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_paste, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "effectSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_effectSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "effect", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_effect, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "bookSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_bookSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "book", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_book, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "liquidSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_liquidSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "liquid", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_liquid, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "hostSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_hostSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "host", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_host, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "productionSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_productionSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "production", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_production, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "exitSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_exitSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "exit", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_exit, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "modePvpSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_modePvpSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "modePvp", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_modePvp, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "modeAttackSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_modeAttackSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "modeAttack", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_modeAttack, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "refresh1Small", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_refresh1Small, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "refresh1", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_refresh1, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "noneSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_noneSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "none", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_none, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "pencilSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_pencilSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "pencil", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_pencil, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "refreshSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_refreshSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "refresh", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_refresh, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "modeSurvivalSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_modeSurvivalSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "modeSurvival", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_modeSurvival, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "commandRallySmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_commandRallySmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "commandRally", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_commandRally, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "unitsSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_unitsSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "units", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_units, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "commandAttackSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_commandAttackSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "commandAttack", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_commandAttack, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "trashSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_trashSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "trash", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_trash, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "chatSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_chatSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "chat", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_chat, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "turretSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_turretSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "turret", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_turret, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "playersSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_playersSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "players", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_players, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "editorSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_editorSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "editor", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_editor, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "copySmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_copySmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "copy", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_copy, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "treeSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_treeSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "tree", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_tree, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "lockOpenSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_lockOpenSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "lockOpen", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_lockOpen, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "pickSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_pickSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "pick", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_pick, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "exportSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_exportSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "export", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_export, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "downloadSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_downloadSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "download", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_download, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "uploadSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_uploadSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "upload", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_upload, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "settingsSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_settingsSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "settings", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_settings, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "spraySmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_spraySmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "spray", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_spray, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "zoomSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_zoomSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "zoom", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_zoom, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "powerOldSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_powerOldSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "powerOld", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_powerOld, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "powerSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_powerSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "power", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_power, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "menuSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_menuSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "menu", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_menu, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "lockSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_lockSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "lock", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_lock, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "eyeSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_eyeSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "eye", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_eye, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "eyeOffSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_eyeOffSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "eyeOff", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_eyeOff, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "warningSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_warningSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "warning", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_warning, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "terrainSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_terrainSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "terrain", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_terrain, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "defenseSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_defenseSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "defense", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_defense, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "planetSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_planetSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "planet", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_planet, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "arrowNoteSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_arrowNoteSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "arrowNote", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_arrowNote, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "musicSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_musicSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "music", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_music, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "fileAudioSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_fileAudioSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "fileAudio", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_fileAudio, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "volumeOffSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_volumeOffSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "volumeOff", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_volumeOff, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "volumeDownSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_volumeDownSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "volumeDown", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_volumeDown, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "volumeUpSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_volumeUpSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "volumeUp", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_volumeUp, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "tagSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_tagSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "tag", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_tag, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "tagsSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_tagsSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "tags", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_tags, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "battery4Small", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_battery4Small, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "battery4", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_battery4, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "battery3Small", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_battery3Small, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "battery3", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_battery3, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "battery2Small", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_battery2Small, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "battery2", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_battery2, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "battery1Small", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_battery1Small, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "battery1", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_battery1, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "battery0Small", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_battery0Small, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "battery0", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_battery0, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "fileCodeSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_fileCodeSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "fileCode", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_fileCode, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "fileVideoSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_fileVideoSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "fileVideo", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_fileVideo, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "fileArchiveSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_fileArchiveSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "fileArchive", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_fileArchive, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "folderOpenSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_folderOpenSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "folderOpen", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_folderOpen, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "folderEmptySmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_folderEmptySmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "folderEmpty", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_folderEmpty, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "folderOpenEmptySmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_folderOpenEmptySmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "folderOpenEmpty", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_folderOpenEmpty, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "inboxSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_inboxSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "inbox", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_inbox, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "sitemapSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_sitemapSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "sitemap", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_sitemap, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "cloudSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_cloudSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "cloud", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_cloud, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "uploadCloudSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_uploadCloudSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "uploadCloud", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_uploadCloud, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "downloadCloudSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_downloadCloudSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "downloadCloud", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_downloadCloud, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "rainSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_rainSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "rain", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_rain, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "cloudSunSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_cloudSunSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "cloudSun", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_cloudSun, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "drizzleSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_drizzleSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "drizzle", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_drizzle, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "cloudFlashSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_cloudFlashSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "cloudFlash", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_cloudFlash, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "cloudWindSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_cloudWindSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "cloudWind", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_cloudWind, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "boxSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_boxSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "box", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_box, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "chartAltSmall", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_chartAltSmall, "Larc/scene/style/TextureRegionDrawable;", 9 },
	{ "chartAlt", &class_arc_scene_style_TextureRegionDrawable, (intptr_t) &SF_mindustry_gen_Icon_chartAlt, "Larc/scene/style/TextureRegionDrawable;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_mindustry_gen_Icon, 0, "()V", 1 },
	{ "load", (intptr_t) SM_mindustry_gen_Icon_load, 0, "()V", 9 },
	{ "<clinit>", (intptr_t) clinit_mindustry_gen_Icon, 0, "()V", 8 },
};

Class class_mindustry_gen_Icon{
		.nativeName = (intptr_t) "mindustry/gen/Icon",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(mindustry_gen_Icon),
		.classVtable = (intptr_t) vtable_mindustry_gen_Icon,
		.staticInitializer = (intptr_t) clinit_mindustry_gen_Icon,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_mindustry_gen_Icon,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 277,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_mindustry_gen_Icon = registerClass(&class_mindustry_gen_Icon);

}
