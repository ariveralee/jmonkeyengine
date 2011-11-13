package com.g3d.input.binding;

/**
 * Implemented by user-code in order to recieve input events.
 */
public interface BindingListener {

    /**
     * Invoked when the specified binding to a trigger has a value
     * greater than zero. Once the <code>BindingListener</code> is registered
     * to a Dispatcher, this method will be called every frame when the binding's
     * value is greater than zero. The value can never be zero or negative.
     *
     * @param binding
     * @param value
     */
    void onBinding(String binding, float value);
}