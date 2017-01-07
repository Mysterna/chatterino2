#ifndef LAZYLOADEDIMAGE_H
#define LAZYLOADEDIMAGE_H

#include "QString"
#include "QImage"

class LazyLoadedImage
{
public:
    LazyLoadedImage(const QString& url, qreal scale = 1, const QString& name = "", const QString& tooltip = "", const QMargins& margin = QMargins(), bool isHat = false);
    LazyLoadedImage(QImage* image, qreal scale = 1, const QString& name = "", const QString& tooltip = "", const QMargins& margin = QMargins(), bool isHat = false);

    const QImage* image() const {
        return m_image;
    }

    qreal scale() const {
        return m_scale;
    }

    const QString& url() const { return m_url; }
    const QString& name() const { return m_name; }
    const QString& tooltip() const { return m_tooltip; }
    const QMargins& margin() const { return m_margin; }
    bool animated() const { return m_animated; }
    bool isHat() const { return m_ishat; }

private:
    QImage* m_image = NULL;
    qreal m_scale;

    QString m_url;
    QString m_name;
    QString m_tooltip;
    bool m_animated;
    QMargins m_margin;
    bool m_ishat;
};

#endif // LAZYLOADEDIMAGE_H