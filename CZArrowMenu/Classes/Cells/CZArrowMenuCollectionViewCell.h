//
//  CZArrowMenuCollectionViewCell.h
//  CZArrowMenu
//
//  Created by siu on 11/10/2018.
//

#import <UIKit/UIKit.h>
#import "CZArrowMenuItem.h"

NS_ASSUME_NONNULL_BEGIN

@protocol CZArrowMenuCellDelegate;

@interface CZArrowMenuCollectionViewCell : UICollectionViewCell
@property (nonatomic, strong) CZArrowMenuItem *item;
@property (nonatomic, weak) id <CZArrowMenuCellDelegate> delegate;
@end

NS_ASSUME_NONNULL_END
