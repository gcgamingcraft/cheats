#pragma once
#include <vector>
#include "game_structures.hpp"

namespace globals {
	using namespace protocol::engine::sdk;
	using namespace protocol::game::sdk;

	inline u_world* gworld = 0;
	inline a_game_state_base* game_state = 0;
	inline u_game_instance* owning_instance = 0;
	inline u_localplayer* local_player = 0;
	inline a_player_controller* local_controller = 0;
	inline a_player_camera_manager* local_camera_manager = 0;
	inline mec_pawn* local_mec = 0;

	inline std::vector < mec_pawn* > player_cache{};
	inline std::vector < world_item* > world_item_cache{};
}