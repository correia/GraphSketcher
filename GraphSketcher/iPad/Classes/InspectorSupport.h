// Copyright 2003-2013 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.

#import <OmniUI/OUIInspector.h>
#import <OmniUI/OUIInspectorSlice.h>

#import <GraphSketcherModel/RSGraph.h>
#import <GraphSketcherModel/RSGraphElement.h>
#import <GraphSketcherModel/RSGraphEditor.h>

@interface RSGraph (ColorInspection) <OUIColorInspection>
@end
@interface RSGraphElement (ColorInspection) <OUIColorInspection, OUIFontInspection>
@end

@class RSGraphEditor, GraphViewController;
@interface OUIInspectorSlice (RSAdditions)
@property(readonly) GraphViewController *graphViewController;
@property(readonly) RSGraphEditor *editor;
@end
