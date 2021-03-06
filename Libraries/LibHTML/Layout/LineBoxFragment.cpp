#include <LibGUI/GPainter.h>
#include <LibHTML/Layout/LayoutText.h>
#include <LibHTML/Layout/LineBoxFragment.h>
#include <LibHTML/RenderingContext.h>

void LineBoxFragment::render(RenderingContext& context)
{
    for (auto* ancestor = layout_node().parent(); ancestor; ancestor = ancestor->parent()) {
        if (!ancestor->is_visible())
            return;
    }

    if (layout_node().is_text()) {
        auto& layout_text = static_cast<const LayoutText&>(layout_node());
        layout_text.render_fragment(context, *this);
    }
}
