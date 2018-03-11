#ifndef GODOT_CPP_GDSCRIPTFUNCTIONSTATE_HPP
#define GODOT_CPP_GDSCRIPTFUNCTIONSTATE_HPP


#include <gdnative_api_struct.gen.h>
#include <stdint.h>

#include <core/CoreTypes.hpp>
#include <core/Ref.hpp>

#include <Reference.hpp>
namespace godot {


class GDScriptFunctionState : public Reference {
public:

	static void *___get_type_tag();
	static void *___get_base_type_tag();
	static inline const char *___get_class_name() { return (const char *) "GDScriptFunctionState"; }
	static inline Object *___get_from_variant(Variant a) { godot_object *o = (godot_object*) a; return (Object *) godot::nativescript_1_1_api->godot_nativescript_get_instance_binding_data(godot::_RegisterState::language_index, o); }

	// enums

	// constants

	// methods
	Variant resume(const Variant arg = Variant());
	bool is_valid(const bool extended_check = false) const;
	Variant _signal_callback(const Array& __var_args = Array());
	template <class... Args> Variant _signal_callback(Args... args){
		return _signal_callback(Array::make(args...));
	}

};

}

#endif