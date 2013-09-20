/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSArray, NSDictionary, NSMutableArray, NSURLRequest, SKUIIPadSearchViewController, SKUIIPhoneSearchViewController, SKUIMetricsController, SKUISearchFieldController, SKUISearchPage, SSMetricsPageEvent, SSVLoadURLOperation;

@interface SKUISearchViewController : SKUIViewController <SKUISearchChildViewControllerDelegate, SKUIMetricsViewController> {
    NSDictionary *_facetSelections;
    SKUIIPadSearchViewController *_iPadViewController;
    SKUIIPhoneSearchViewController *_iPhoneViewController;
    SSMetricsPageEvent *_lastPageEvent;
    SSVLoadURLOperation *_loadOperation;
    SKUIMetricsController *_metricsController;
    SKUISearchPage *_page;
    NSMutableArray *_previousRelatedQueries;
    NSArray *_searchFacets;
    SKUISearchFieldController *_searchFieldController;
    NSURLRequest *_urlRequest;
}

@property(retain) SKUISearchFieldController * searchFieldController;

+ (id)_customFacetsForFacets:(id)arg1 clientContext:(id)arg2;

- (void).cxx_destruct;
- (void)_cancelButtonAction:(id)arg1;
- (void)_metricsEnterEventNotification:(id)arg1;
- (void)_reloadChildViewController;
- (void)_reloadOrientation:(int)arg1;
- (void)_reloadView;
- (void)_searchWithSearchTerm:(id)arg1 persistRelated:(BOOL)arg2;
- (void)_searchWithURLRequest:(id)arg1 persistRelated:(BOOL)arg2;
- (void)_setMetricsController:(id)arg1;
- (void)_setResponse:(id)arg1 error:(id)arg2;
- (id)activeMetricsController;
- (id)contentScrollView;
- (void)dealloc;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)reloadData;
- (void)scrollToTop;
- (void)searchChildViewController:(id)arg1 didSelectEditorial:(id)arg2;
- (void)searchChildViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)searchChildViewController:(id)arg1 didSelectRelatedQuery:(id)arg2;
- (void)searchChildViewController:(id)arg1 didSelectSearchTerm:(id)arg2;
- (void)searchChildViewControllerDidChangeFacetSelections:(id)arg1;
- (void)searchChildViewControllerDidSelectRelatedBackButton:(id)arg1;
- (id)searchFieldController;
- (void)searchWithExternalURL:(id)arg1;
- (void)searchWithSearchTerm:(id)arg1;
- (void)searchWithURL:(id)arg1;
- (void)setClientContext:(id)arg1;
- (void)setSearchFieldController:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

@end