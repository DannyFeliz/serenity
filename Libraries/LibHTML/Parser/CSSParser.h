#pragma once

#include <AK/NonnullRefPtr.h>
#include <LibHTML/CSS/StyleSheet.h>

NonnullRefPtr<StyleSheet> parse_css(const StringView&);
NonnullRefPtr<StyleDeclaration> parse_css_declaration(const StringView&);

